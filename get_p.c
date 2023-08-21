#include "main.h"

/**
 * get_p - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_p(const char *format, int *i, va_list list)
{
	int current_i = *i + 1;
	int p = -1;

	if (format[current_i] != '.')
		return (p);

	p = 0;

	for (current_i += 1; format[current_i] != '\0'; current_i++)
	{
		if (is_digit(format[current_i]))
		{
			p *= 10;
			p += format[current_i] - '0';
		}
		else if (format[current_i] == '*')
		{
			current_i++;
			p = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = current_i - 1;

	return (p);
}
