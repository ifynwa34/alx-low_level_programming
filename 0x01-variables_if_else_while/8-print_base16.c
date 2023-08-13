#include <stdio.h>
/**
 * main - Entry point
 * Description: 'to prints all the numbers of base 16 in lowercase'
 * Return: 0
 */
int main(void)
{
int g;
char u;

for (g = 0 ; g < 10 ; g++)
putchar(g + '0');
for (u = 'a' ; u <= 'f' ; u++)
putchar(u);
putchar('\n');
return (0);
}
