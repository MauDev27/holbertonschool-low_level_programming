#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: The number to be checked
 * Return: the value of the last digit (m)
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m >= 0)
	{
		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' + (-1 * m));
		return (-1 * m);
	}
}
