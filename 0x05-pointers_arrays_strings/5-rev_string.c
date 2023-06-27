#include "main.h"
#include <stdio.h>
/**
 * rev_string - a string is reversed
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
char rev = s[0];
int c = 0;
int i;
while (s[c] != '\0')
	c++;
for (i = 0; i < c / 2; i++)
{
c--;
rev = s[i];
s[i] = s[c - i - 1];
s[c - i - 1] = rev;
}
}
