#include "main.h"


int _strlen(char *str)
{
	int i;

	while (str == NULL)
		i++;

	return (i);
}

char *_itoa(int num, int base)
{
	int i = 0, rem;
	bool isNegative = false;
	char *ptr;

	/* A zero is same "0" string in all base */
	if (num == 0) 
	{
		*ptr = '0';
		*ptr++ = '\0';
		return ptr;
	}

	/* negative numbers are only handled if base is 10 
	otherwise considered unsigned number */
	if (num < 0 && base == 10) 
	{
		isNegative = true;
		num = -num;
	}
	while (num != 0) 
	{
		rem = num % base;
		*ptr++ = (rem > 9)? (rem-10) + 'A' : rem + '0';
		num = num / base;
	}

	/* Append negative sign for negative numbers */
	if (isNegative)
		*ptr++ = '-';

	*ptr = '\0';

	my_reverse(ptr, i);

	return (ptr);
}
