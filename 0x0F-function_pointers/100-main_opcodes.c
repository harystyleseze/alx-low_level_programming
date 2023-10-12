#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point
 * @argc: the number of parameters.
 * @argv: the parameeters in the case the number ob bytes.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int count, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (count = 0; count < n; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < n - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
