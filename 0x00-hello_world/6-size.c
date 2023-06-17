#include <stdio>
/**
 * main - starting point of the program
 * Return: Always 0 to indicate success
 */
int main(void)
{
char p;
int q;
long int s;
long long int t;
float f;
printf("Sizeof a char: %zu byte(s)\n", (unsigned long)sizeof(p));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(q));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

