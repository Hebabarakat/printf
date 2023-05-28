#include "main.h"

/**
 *_printf - formated output conversion and print data.
 * @format: input string.
 *
 * Returns: the number of characters printed.
 */

int _printf(const char *format, ...)
{
  unsigned int a ;
  va_list arguments;
  int (*function) (va_list, char*, unsigned int);
char c;
char *s;

  va_start(argument, format);
  for (a = 0; format[a] != '\0'; a++)
    {
      if (format[a] == '%')
	{
	go-to format[a+1];
	  if ( format [a+1] == 'c')
	c = va_arg(argument, char);
	  else if (format[a+1] == 's')
	s = va_ arg(argument, char*);
	}
	va_arg(argument, char);	
	}
  va_end(argument);
  return (a);
 }
