#include "main.h"
/**
 * puts_half - prints half the string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
int x = 0;
int y;
while (str[x] != '\0')
{
y++;
}
if (x % 2 == 1)
{
x = (y - 1) / 2;
x += 1
}
else
{
x = y / 2;
}
for (; x < y; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
