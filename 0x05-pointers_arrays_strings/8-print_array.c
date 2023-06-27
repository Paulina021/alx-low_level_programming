#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an elements of  array of int
 * @a: arrayof int
 * @n: num of elements of thearay tobe printed
 * Return: void
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x != (n - 1))
{
	printf(", ");
}
}
printf("\n");
}

