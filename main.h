#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _printchar(char x);

typedef struct conv_spec {
	char spec;
	int (*fuction)(va_list arg);
} conv;
int conv_c(va_list arg);
int conv_s(va_list arg);
int conv_p(va_list arg);
#endif/*main.h*/
