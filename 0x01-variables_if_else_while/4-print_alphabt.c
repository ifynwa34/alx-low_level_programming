#include <stdio.h>
/**
 * main - Entry point print alphabets except q and e
 *
 * Return: 0
 */
int main(void)
{
char o;
for (o = 'a' ; o <= 'z' ; o++)
if (o != 'q' && o != 'e')
putchar(o);
putchar('\n');
return (0);
}
