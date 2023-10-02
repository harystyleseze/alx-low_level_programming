#include <stdio.h>

/**
 * main - prints file name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array containing the program's command line arguments.
 * Return: 0 upon success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
