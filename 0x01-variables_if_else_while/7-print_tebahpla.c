#include <stdio.h>
/**
 * main - Entry point printing alphabets in the reverse
 *
 * Return: 0
 */
int main(void)
{
char u;
for (u = 'z'; u >= 'a' ; u--)
putchar(u);
putchar('\n');
return (0);
}
