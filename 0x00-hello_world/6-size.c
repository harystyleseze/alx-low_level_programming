#include <stdio.h>
/**
 * main - entry point
 *
 * Description : this program prints the size of different data types
 *
 * Return 0: always successful
 */
int main (void)
{
	int i;
	long int j;
	long long int k;
	float l;
	char m;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(m));
	printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(l));
	return (0);
}
