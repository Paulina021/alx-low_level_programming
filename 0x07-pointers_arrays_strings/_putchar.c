#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 * @c: The char to print
 *
 * Return: 1 on success.
 * On error, return -1nand error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
