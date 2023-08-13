#include <stdio.h>
/**
 * main - Entry point
 * Description:'to print all the possible different combination of two digits'
 * Return: 0
 */
int main(void)
{
int g = '0';
int u = '0';
for (u = '0' ; u <= '9'; u++)
{
for (g = '0' ; g <= '9'; g++)
{
if (!((g == u) || (u > g)))
{
putchar(u);
putchar(g);
if (!(g == '9' && u == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
