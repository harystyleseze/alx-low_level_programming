#include <stdio.h>

/**
 * main - prints number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array containing the program's command line arguments.
 * Return: 0 upon successful execution
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
