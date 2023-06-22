#include "main.h"
/**
 * _isalpha - verifies alphabetic characters
 * @c: the character to be verified
 * Return: 1 if c is a letter unless 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
