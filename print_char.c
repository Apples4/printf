#include "main.h"

/**
 * ch_ - a function that prints a char
 * @character: input list
 * Return: prints characters
 */

int ch_(va_list character)

{
	return (_putchar(va_arg(character, int)));
}


