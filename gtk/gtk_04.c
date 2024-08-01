#include <gtk/gtk.h>


int main (int argc, char *argv [])
{
    gtk_init (&argc, &argv);

    g_print ("Version: %d.%d.%d\n", gtk_major_version, gtk_minor_version, gtk_micro_version);
    
    return 0;
}