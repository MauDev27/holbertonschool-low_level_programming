#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 1;

		_putchar(48);
		while (b <= 9)
		{
			if (a * b < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar('0' + ((a * b) % 10));
			}
			else
			{
				_putchar(44);
				_putchar(32);
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
			}
			b++;
		}
		_putchar(10);
		a++;
	}
}
