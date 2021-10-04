#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: takes input
 * Return: 1 if c is alphabet , 0 if it is not alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
