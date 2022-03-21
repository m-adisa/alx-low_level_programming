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
		s++;
		i++;
	}

	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
