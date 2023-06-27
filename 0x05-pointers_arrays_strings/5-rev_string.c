#include "main.h"
#include <stdio.h>
/**
 * rev_string - a string is reversed
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
char rev = 0;
int c;
int i;
while (s[rev] != '\0')
{
rev++;
}
for (i = 0; i < rev / 2; i++)
{
c = s[i];
s[i] = s[rev - 1 - i];
s[rev - 1 - i] = c;
}
}
