#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: is the character to be checked
 * Return: 1 for lower or upper case else return 0
 */
int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
