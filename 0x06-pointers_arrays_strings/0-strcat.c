#include "main.h"
/**
 * *_strcat - main
 * @dest: string to be appended
 * @src: the new string
 * Return: new appended string
 */
char *_strcat(char *dest, char *src)
{
	int i, n, c;

	for (i = 0; dest[i]; i++)
	{
		if (dest[i] == '\0')
			n = i;
	}

	for (c = 0; src[c]; c++)
	{
		dest[n] = src[c];
		n++;
	}

	n++;

	dest[n] = '\0';

	return (dest);
}
