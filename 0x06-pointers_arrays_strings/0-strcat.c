#include "main.h"
/**
 * *_strcat - main
 * @dest: string to be appended
 * @src: the new string
 * Return: new appended string
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; i < 10000; i++)
	{
		if (dest[i] == '\0')
			break;
	}

	for (c = 0; src[c] != '\0' && c < i; c++)
	{
		dest[i + c] = src[c];
	}

	i++;

	dest[i] = '\0';

	return (dest);
}
