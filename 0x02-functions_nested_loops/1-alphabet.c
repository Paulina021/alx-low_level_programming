#include "main.h"
/**
 * print _alphabet - The alphabet are printed in lowercase
 *
 * function prints all the lowercase letters of the alphabet from 'a' to 'z' using the _putchar function
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
