#ifndef MAIN_H
#define MAIN_H
#include"main.h"
#include<stdarg.h>
#include<stdio.h>
#include<string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _printchar(char x);

typedef struct conv_spec {
	char spec;
	int (*fuction)(valist arg);
} conv;

#endif/*main.h*/
