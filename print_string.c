#include "main.h"

/**
 * str_ - function to print string
 * @string: input of a string
 * Return: number of elements in string
 */
int str_(va_list string)
{
	int i;
	char *stri;

	stri = va_arg(string, char *);

	if (stri == NULL)
		stri = "NULL";

	i = 0;
	while (stri[i] != '\0')
		i += _putchar(stri[i]);
	return (i);
}
