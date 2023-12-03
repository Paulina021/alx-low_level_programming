<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
=======
#include "main.h"
/**
 * main - Test the function for positive or negative
 * Return: 0 successful executio0x03-debugging
 */
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
>>>>>>> 76ac89a3b6907724945fe22ba302bb0aa2310b00
}
