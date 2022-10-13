#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The parameter to be tested
 * Return: value of count
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s++) != '\0')
	{
		count++;
	}
	return (count);
}
