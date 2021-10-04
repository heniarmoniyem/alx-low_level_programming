#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: takes intiger
 * Return: 1 if true, 0 if false
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
