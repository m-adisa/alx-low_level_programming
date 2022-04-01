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
	int sum;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", sum);

	return (0);
}
