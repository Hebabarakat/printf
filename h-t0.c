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

  va_start(argument, format);
  for (a = 0; format[a] != '\0'; a++)
    {
      if (format[a] == '%')
	{
	  if ( format [a+1]
