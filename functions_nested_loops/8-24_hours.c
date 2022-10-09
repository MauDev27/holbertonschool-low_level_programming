#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;

	while (h <= 23)
	{
		int min = 0;

		while (min <= 59)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar(10);
			min++;
		}
		h++;
	}
}
