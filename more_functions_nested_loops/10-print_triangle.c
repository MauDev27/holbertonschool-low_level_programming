#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: the parameter to be tested
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = a; b < size - 1; b++)
			{
				_putchar(32);
			}
			for (c = 0; c < a + 1; c++)
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
