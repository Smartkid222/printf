#include "main.h"


/**
 * check_specifier - checks if character is a valid specifier
 * @format: pointer to character
 * Return: pointer to function
 **/
int (*check_specifier(char *format))(va_list)
{
	fmt fms[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_str},
		{"d", print_decimal},
/**		{"i", print_int},**/
		{'\0', NULL}
	};
	int i;

	for (i = 0; fms[i].spec != NULL; i++)
		if (*format == *(fms[i].spec))
			return (fms[i].print);
	return (NULL);
}
