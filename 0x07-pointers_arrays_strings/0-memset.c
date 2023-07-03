#include "main.h"
/**
 * _memset - A memory with a specific value that fills a block
 * @s: starting address memory to be filled
 * @b: value desired
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
