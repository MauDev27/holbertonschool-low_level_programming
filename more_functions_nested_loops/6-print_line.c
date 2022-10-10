#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the parameter to be checked
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
