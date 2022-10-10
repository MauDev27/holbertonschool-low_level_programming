#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 48; b <= 62; b++)
		{
			if (b >= 58)
			{
				_putchar(49);
			}
			_putchar('0' + ((b + 2) % 10));
		}
		_putchar(10);

	}
}
