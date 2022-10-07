#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @n: The parameter to be checked
 * Return: void
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
