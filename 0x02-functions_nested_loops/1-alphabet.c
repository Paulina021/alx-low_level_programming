#include "main.h"
/**
 * print_alphabet - Prints the alphabets followed by a new line
 *
 * function prints all the alphabet from 'a' to 'z'
 * It uses the _putchar function to print each character and adds a new line.
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
