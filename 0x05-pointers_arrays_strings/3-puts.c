#include "main.h"
/**
 *_puts - print a string to standars output
 * @str: the string to be printed. must be null-terminated
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
