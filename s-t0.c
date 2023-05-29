#include"main.h"
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>

/**
 *_printf - formated output conversion and print data.
 *@format: input string.
 *
 *Return: "0" always sucsses.
 */

int _printf(const char *format, ...)
{
va_list arg;
int a, i;
int count;
i = 0;
count = 0;
va_start(arg, format);

while (format[i] != '\0')
{
if (format[i] != '%')
{
	count += write(1,&format[i], 1);
	i++;
}
else if (format[i] == '%')
{
		i++;
	switch (format[i])
	{
	case 'c':
		{
	a =  va_arg(arg, int);
	count = write(1, &a, 1);
	break;
	}
	}
	}
}

va_end(arg);
return (count);
}
