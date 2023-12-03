#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet ten times and a new line
 *
 * This function prints the alphabet from 'a' to 'z' ten times.
 * nested while loops repeat the printing process, adds a new line.
 */
void print_alphabet_x10(void)
{
char ch;
int a;
a = 0;
while (a < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
a++;
}
}
