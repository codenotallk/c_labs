#include <stdio.h>

int assembly (void);
int number (void);

int main (void)
{
    printf ("Assembly value: %d\n", assembly ());

    return 0;
}

int number (void)
{
    return 10;
}