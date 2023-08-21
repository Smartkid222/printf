#include "main.h"


int percent_func(__attribute__((unused))va_list args)
{
	return (_putchar('%'));
}

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	return (_putchar(ch));
}

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

int print_decimal(va_list args)
{
	int num = va_arg(args, int);

	return (_putchar(num));
}

int _printf(const char *format, ...)
{
	fmt fms[] = {
		{"%", percent_func},
		{"c", print_char},
		{"s", print_str},
		{"d", print_decimal},
		{'\0', NULL}
	};
	int j;
	int sum = 0;
	char *t;
/*	char *ptr;*/
	va_list args;

	va_start(args, format);

	for (t = (char *)format; *t != '\0'; t++)
	{
		if (t == NULL)
			return (-1);
		if (*t != '%')
		{
			sum += _putchar(*t);
			continue;
		}
		else if (*t == '%')
		{
			for (j = 0; fms[j].spec != NULL; j++)
			{
				if (*(t + 1) == *(fms[j].spec))
				{
					fms[j].print(args);
					t++;
				}
					
			}
		}
		
	}

	va_end(args);

	return (sum);
}
