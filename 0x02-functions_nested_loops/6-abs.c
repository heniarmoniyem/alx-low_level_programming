#include "main.h"
/**
 * _abs - computes the absoulute value of the function
 * @n: accepts number
 * Return: returns n
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n = -1 * n;
	}
	else
	{
		n = 0;
	}
	return (n);
}
