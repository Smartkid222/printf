#include <unistd.h>

/**
 * _putchar - a function to print characters
 * one at a time.
 * @c: character to be printed to stdout.
 **/
int _putchar(int c)
{
	return(write(1, &c, 1));
}
