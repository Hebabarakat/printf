#include "main.h"
#include <stdarg.h>

/**
 *_printf - formated output conversion and print data.
 * @format: input string.
 *
 * Returns: the number of characters printed.
 */

int _printf(const char *format, ...)
{
  unsigned int a ;
  va_list argument;
char c;
char *s;

  va_start(argument, format);
  for (a = 0; format[a] != '\0'; a++)
    {
      if (format[a] == '%')

	{
	  if ( format [a+1] == 'c')
	c = va_arg(argument, char);
	  else if (format[a+1] == 's')
	s = va_arg(argument, char*);
	}
	va_arg(argument, char);	
	}
  va_end(argument);
  return (a);
 }
