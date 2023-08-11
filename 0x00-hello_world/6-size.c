#include <stdio.h>

/**
 * main entry point to the c programm. Using the printf function to display sizes
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("sizes of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
printf("sizes of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("sizes of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("sizes of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
