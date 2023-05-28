#include"main.h"
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>

/**
 *
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
{
const char *s;
va_list arg;
int a; 
char *x; 

va_start (arg, format);

for (s = format; *s != '\0'; s++)
{
while (*s != '%')
{
	write(1, s, strlen(s));
	s++;
}
		s++;
	switch (*s)
	{
	case 'c':
		{
	a =  va_arg(arg, int);
	write(1, &a, sizeof(a));
	break;
	}
	case 's':
	{
	x =  va_arg(arg, char*);
	write(1, x, strlen(x));
	break;
	}
	}
}

va_end(arg);
return(0);	
}
