#include <stdio.h>

extern int var;

int assembly (void);

int main (void)
{
    printf ("Assembly value: %d\n", var);
    assembly ();
    printf ("Assembly value: %d\n", var);

    return 0;
}
