#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @str: string to be printed
 */
void print_rev(char *str)
{
int i, l;
l = strlen(str);
for (i = l - 1; i >= 0; i--)
_putchar(str[i]);
_putchar('\n');
}

