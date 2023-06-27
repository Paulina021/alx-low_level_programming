#include "main.h"
/**
 * puts2 - prints one char out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i += 2)
{
_putchar(str[i]);
}
}
