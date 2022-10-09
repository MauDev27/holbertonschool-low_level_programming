#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to be checked
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("98");
	}
	else
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("98");
	}
	putchar(10);
}
