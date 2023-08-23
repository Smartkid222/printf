#include "main.h"

/**
 * print_percent - prints percentage sign to stdout
 * @args: unused argument
 * Return: returns characters printed.
 **/
int print_percent(__attribute__((unused))va_list args)
{
	return (_putchar('%'));
}

/**
 * print_char - prints character to stdout
 * @args: pointer to macro va_list
 * Return: returns characters printed
 **/
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	if (ch)
		return (_putchar(ch));
	return (0);
}

/**
 * print_str - prints string to stdout
 * @args: pointer to macro va_list
 * Return: returns string printed
 **/
int print_str(va_list args)
{
	char *ptr = va_arg(args, char *);
	int i = 0;

	if (ptr == NULL)
		return (-1);

	while (ptr[i] != '\0')
	{
		_putchar(ptr[i]);
		i++;
	}
	return (i);
}

/**
 * print_char - prints decimal to stdout
 * @args: pointer to macro va_list
 * Return: returns int
 **/
int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	int i = _strlen(num);

	if (num)
		return (i);
	return (0);
}
