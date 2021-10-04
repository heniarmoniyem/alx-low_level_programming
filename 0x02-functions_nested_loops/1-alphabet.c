#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Prints letters from a to z in lower case
 */
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
