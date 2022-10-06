#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
