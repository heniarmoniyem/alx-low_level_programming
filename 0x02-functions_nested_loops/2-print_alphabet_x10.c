#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10X
 */
void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		char n = 'a';

		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
