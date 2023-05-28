#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_printf - formated output conversion and print data.
 * @format: input string.
 *
 * Returns: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format);
	if (format[i] == '%' && !format[i + 1])
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	printf(buffer, ibuf), va_end(arguments);
				return (-1);
				{
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
}
				else
				{
					len += function(arguments, buffer, ibuf);
					i += (i + 1);
				}
			} i++;
		}
			va_end(arguments);
