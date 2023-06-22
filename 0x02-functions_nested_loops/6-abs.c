#include "main.h"
/**
 * _abs - the absolute value of an integer is computed
 * @n: the int to verify
 *absolute value of the given integer.
 *It  returns the input if it's positive or zero.
 *It returns the negative of the input if the input is negative.
 * Return: the absolute value of int, if INT_MIN is the input
 * the outcome is unclear because of overflow restrictions
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
}
