#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i;
	int print = 0;
	int print_chars = 0;
	int f;
	int w;
	int p;
	int s;
	int buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			print_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			f = get_f(format, &i);
			w = get_w(format, &i, list);
			p = get_p(format, &i, list);
			s = get_s(format, &i);
			++i;
			print = handle_print(format, &i, list, buffer,
				f, w, p, s);
			if (print == -1)
				return (-1);
			print_chars = print_chars + print;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (print_chars);
}

/**
 * print_buffer - Prints the contents of buffer if existing
 * @buffer: Array of chars
 * @buff_ind: Index to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
