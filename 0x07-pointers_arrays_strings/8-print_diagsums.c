#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * @a: input
 * @size : input
 * Return: 0 awalys (success)
 */
void print_diagsums(int *a, int size)
{
int sum1, sum2, y;
sum1 = 0;
sum2 = 0;
for (y = 0; y < size; y++)
{
sum1 = sum1 + a[y * size + (size - y - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
