#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdio.h>

typedef struct formatter {
	char *spec;
	int (*print)(va_list);
} fmt;

int _putchar(char);
int _printf(const char *format, ...);

#endif
