#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 upon successful execution.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
