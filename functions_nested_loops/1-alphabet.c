#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
	/* return (0); */
}
