#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int u, g;
for (u = 0 ; u <= 98 ; u++)
{
for (g = u + 1 ; g <= 99 ; g++)
{
putchar((u / 10) + '0');
putchar((u % 10) + '0');
putchar(' ');
putchar((g / 10) + '0');
putchar((g % 10) + '0');
if (u == 98 && g == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
