#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - check the code for ALX School students.
 * @format: argument count
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, arg);
	va_end(arg);
	return (done);
}
