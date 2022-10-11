#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the parameter to be tested
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	for (a = size; a > 0; a--)
	{
		for (b = size; b > 0; b--)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
	{
		_putchar(10);
	}
}
