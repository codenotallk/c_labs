#include <keyboard.h>
#include <display.h>
#include <udp_server.h>
#include <typewriter.h>
#include <string.h>

static input_base_t *get_input (char *option);

int main (int argc, char *argv [])
{
    display_t display;
    typewriter_t typewriter;

    if (argc != 2)
    {
        fprintf (stderr, "Error no input selected.\nUsage %s udp/keyboard\n", argv[0]);
        return EXIT_FAILURE;
    }

    input_base_t *base = get_input (argv [1]);

    if (display_open (&display) == true && 
        base != NULL)
    {
        char buffer [1024];

        typewriter_open (&typewriter, &(typewriter_args_t)
                                      {
                                        //  .ib = &keyboard.base,
                                         .ib = base,
                                         .ob = &display.base,
                                         .buffer = 
                                         {
                                            .data = buffer,
                                            .size = 1024,
                                         }
                                      });

        typewriter_run (&typewriter);
    }

    return 0;
}

static input_base_t *get_input (char *option)
{
    input_base_t *base = NULL;

    if (option != NULL && strlen (option) > 0)
    {
        if (strcmp ("keyboard", option) == 0)
        {
            static keyboard_t keyboard;
            keyboard_open (&keyboard);

            base = &keyboard.base;
        }

        else if (strcmp ("udp", option) == 0)
        {
            static udp_server_t udp;
            udp_server_open (&udp);

            base = &udp.base;
        }
    }

    return base;
}