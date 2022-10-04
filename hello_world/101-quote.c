#include <stdio.h>
#include <unistd.h>

/**
 * main - Print de phrase: and that piece of art is useful"
 * - Dora Korpar, 2015-10-19
 * Return: 1 if exited properly, followed by a new line,
 * to the standard error.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
