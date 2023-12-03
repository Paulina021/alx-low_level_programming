#include <unistd.h>
/**
 * _putchar - The char c is written to the stdout
 * @c: char to print
 * Return: success 1
 * error, return -1 and error is set appropriately/
 */
int _putchar(char c)
{
return(write(1,&c, 1));
}
