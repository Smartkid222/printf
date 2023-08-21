#include "main.h"

/**
 * get_flag - gets flag
 * @format: Formatted string which prints an arguments
 * @i: takes a parameter.
 * Return: Flags:
 */
int get_flag(const char *format, int *i)
{

	int s;
	int current_i;
	int flag = 0;
	const char FLAG_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAG_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		for (s = 0; FLAG_CH[s] != '\0'; s++)
			if (format[current_i] == FLAG_CH[s])
			{
				flag |= FLAG_ARR[s];
				break;
			}

		if (FLAG_CH[s] == 0)
			break;
	}

	*i = current_i - 1;

	return (flag);
}
