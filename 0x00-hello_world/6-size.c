#include <stdio.h>

/**
 * main -  Using the printf function to display sizes
 * Return: always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char: %lu byte(s)\n", sizeof(a));
printf("sizes of an int: %lu byte(s)\n", sizeof(b));
printf("sizes of a long int: %lu byte(s)\n", sizeof(c));
printf("sizes of a long long int: %lu byte(s)\n", sizeof(d));
printf("sizes of a float: %lu byte(s)\n" sizeof(e));
return (0);
}
