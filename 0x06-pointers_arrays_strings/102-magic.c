#include <stdio.h>

/**
 * main - magic file
 * Description: pointer
 * Return: integer
 */

int main(void)
{
	int n;
	int a[5];
	int *ptn;

	a[2] = 1024;
	ptn = &n;

	/**
	 * write your line of code here.
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(ptn + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
