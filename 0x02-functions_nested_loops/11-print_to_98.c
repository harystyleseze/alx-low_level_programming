#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - entry point
 *
 * @n: integer to be passed
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	} else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
