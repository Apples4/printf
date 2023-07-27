#include "main.h"

/**
 * _puts - function to print a string
 * @string: input string variable
 * Return: an int is returned
 */
int _puts(char *string)
{
	int len = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		len++;
	}
	return (len);
}
