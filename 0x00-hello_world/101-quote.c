#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: print strings without using printf or puts
 *
 * Return: zero when successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
