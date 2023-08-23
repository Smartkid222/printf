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


int print_percent(va_list);
int print_char(va_list);
int print_str(va_list);
int print_decimal(va_list);

int (*check_specifier(char *))(va_list);
int _strlen(char *);


#endif
