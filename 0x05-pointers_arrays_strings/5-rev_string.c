#include "main.h"
/**
 * rev_string - main
 * @s: the value to reverse
 */
void rev_string(char *s)
{
	int c;
	char temp;
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	i--;

	for (c = 0; c < i; c++)
	{
		temp = s[c];
		s[c] = s[i];
		s[i] = temp;
		i++;
	}
}
