#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);

#endif
