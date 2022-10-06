#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;
	char b = 97;

	while (a < 10)
	{
		printf("%i", a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
