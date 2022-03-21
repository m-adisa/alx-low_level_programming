#include "main.h"
/**
 * print_rev - main
 * @s: the string to manipulate
 */
void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
