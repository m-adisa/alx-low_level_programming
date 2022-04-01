#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts the input
 * @argv: array of inputs
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (2);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'A')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
