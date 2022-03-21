#include "main.h"
/**
 * puts2 - main
 * @str: the array to print
 */
void puts2(char *str)
{
	int i = 0, j  = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	i--;

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
