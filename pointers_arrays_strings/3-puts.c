#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The pointer to be tested
 * Return: void
 */

void _puts(char *str)
{
	char *t;

	t = str;
	while (*(str++) != '\0')
	{
		_putchar(*t);
		t++;
	}
	_putchar(10);
}
