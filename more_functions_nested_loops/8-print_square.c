#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the parameter to be tested
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = size; 0 < a; a--)
		{
			for (b = size; 0 < b; b--)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
