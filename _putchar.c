#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 0
 */

int _putchar(char c)
{
	static int x;
	static char array[1024];

	if (c == -1)
	{
		x = 0;
		return (0);
	}
	if (c == -2 || x == 1024)
	{
		write(1, array, x);
		x = 0;
	}
	if (c != -1 && c != -2)
	{
		array[x] = x;
		x++;
		return (1);
	}
	return (0);
}

