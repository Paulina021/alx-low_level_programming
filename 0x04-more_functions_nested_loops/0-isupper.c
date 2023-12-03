#include "main.h"
/**
 * _isupper - verify if parameter is an uppercase character.
 * @c: input char.
 * Return: 1 if an uppercase char, 0 in other case.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
