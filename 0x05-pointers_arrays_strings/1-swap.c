#include "main.h"
/**
 * swap_int - swap the values of the arguments passed
 * @a: pointer variable to the first argument
 * @b: pointer variable to the second argument
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
