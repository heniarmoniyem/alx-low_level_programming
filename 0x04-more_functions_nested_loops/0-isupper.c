#include "main.h"

/**
 * _isupper - check if input is an upper case letter
 * @x: intiger to check
 * Return: 1 if true , 0 if false.
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
