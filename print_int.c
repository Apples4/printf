#include <stdio.h>
#include "main.h"

/**
 * int_ -function that prints ints
 * @int_i_d: input ints
 * Return: return ints
 */
int int_(va_list int_i_d)
{
	int i, j = 0, k = 0;
	unsigned int x;

	i = va_arg(int_i_d, int);

	if (i < 0)
	{
		k += _putchar('-');
		x = i * -1;
	}
	else
		x = i;

	j = 1;
	while (x / j > 9)
		j *= 10;

	while (j != 0)
	{
		k += _putchar(x / j + '0');
		x = x / j;
		j = j / 10;
	}
	return (k);
}

