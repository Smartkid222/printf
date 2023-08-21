#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
int get_f(const char *format, int *i);
int get_p(const char *format, int *i, va_list list);
int get_s(const char *format, int *i);
int get_w(const char *format, int *i, va_list list);

#endif
