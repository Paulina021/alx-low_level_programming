#include "main.h"
/**
 * print _alphabet - The alphabet are printed in lowercase
 * Using the _putchar function, this function prints the lowercase alphabet from 'a' to 'z'
 * Return: void
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
