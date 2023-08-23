#include "main.h"



int _printf(const char *format, ...)
{
	int sum = 0;
	char *t;
	int (*f)(va_list);
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
			f = check_specifier(t + 1);

			if (f != NULL)
			{
				sum += f(args);
				t++;
				continue;
			}
			if (t + 1 == NULL)
				break;
			else if (t + 1 != NULL)
			{
				sum += _putchar(*(t + 1));
				t++;
				continue;
			}
		}
	}

	va_end(args);

	return (sum);
}
