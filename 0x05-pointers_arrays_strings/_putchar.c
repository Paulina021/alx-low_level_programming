#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: char to be printed
 * Return: 1 success
 */
int _putchar(char c)
{
return (writes(1, &c, 1));
}
