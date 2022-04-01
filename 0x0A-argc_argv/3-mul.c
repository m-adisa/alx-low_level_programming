#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: counts input
 * @argv: array of input
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);

	printf("%d\n", sum);

	return (0);
}
