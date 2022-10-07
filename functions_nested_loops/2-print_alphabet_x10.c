#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char b = 97;

		while (b < 123)
		{
			_putchar(b);
			b++;
		}
		_putchar(10);
		a++;
	}
}
