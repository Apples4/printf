#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct func - struct for functions
 * @type: format for the print
 * @fp: function pointer
 */
typedef struct func
{
	char *type;
	int (*fp)();
}func_t;
int int_(va_list int_i_d);
int str_(va_list string);
int ch_(va_list character);
int _printf(const char *format, ...);
int _putchar(char c);


#endif
