#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -  print all natural numbers from n to 98
 * @n: starting number
 *
 * Description: this function prints all natural numbers from 0 to 98
 * starting number n up to 98, inclusive, in ascending order
 * number 'n' is already 98 or greater, it will print the numbers
 * in descending order until it reaches 98
 */
void print_to_98(int n)
{
int x, y;
if (n <= 98)
{
for (x = n; x <= 98; x++)
{
if (x != 98)
{
printf("%d, ", x);
}
else if (x == 98)
{
printf("%d, ", x);
}
else if (n >= 98)
{
for (y = n; y >= 98; y--)
{
if (y != 98)
{
printf("%d", y);
}
else if (y == 98)
{
printf("%d\n", y);
}
}
}
}
}
}
