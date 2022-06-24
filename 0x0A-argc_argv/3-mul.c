#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:  if it correct, 1 if there is Error
 */

int main(int argc, char *argv[])
{
	int n, m, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	diff = n * m;

	printf("%i\n", diff);

	return (0);
}
