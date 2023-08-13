#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int h, u, j;
for (h = '0' ; h < '9' ; h++)
{
for (u = h + 1 ; u <= '9' ; u++)
{
for (j = u + 1 ; j <= '9' ; j++)
{
if ((u != h) != j)
{
putchar(h);
putchar(u);
putchar(j);
if (h == '7' && u == '8')
continue;
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
