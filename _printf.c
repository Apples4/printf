#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_ - function to check which specifier to print
 * @format: string being passed
 * @ary: array of struct containing format options
 * @args: list of arguments to print
 * Return: number of characters to be printed
 */
int print_(const char *format, func_t *ary, va_list args)
{
	char x;
	int i = 0, k = 0, l = 0;

	x = format[i];
	while (x != '\0')
	{
		if (x == '%')
		{
			i++;
			l = 0;

			x = format[i];

			while (ary[l].type != NULL && x != *(ary[l].type))
				l++;
			if (ary[l].type != NULL)
				k += ary[l].fp(args);
			else
			{
				if (x == '\0')
					return (0);
				if (x != '%')
					k += _putchar('%');
				k += _putchar(x);
			}
		}
		else
			k += _putchar(x);

		i++;
		x = format[i];
	}
	return (k);
}
/**
 * _printf - print the output
 * @format: input of various elements
 * Return: a character is printed out
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	func_t funcs[] = {
		{"c", ch_},
		{"s", str_},
		{"d", int_},
		{"i", int_},
		{NULL, NULL}
	};

	if (format == NULL)
		return (0);
	va_start(args, format);
	i = print_(format, funcs, args);
	return (i);
}
