#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments
 * @ac: argument count.
 * @av: argument vector.
 * Return: Null if fail or ac/av is 0,
 * else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *retpt;
	int i, j, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, k++)
			;
		k++;
	}
	k++;

	a = malloc(k * sizeof(char));
	if (a == NULL)
		return (NULL);

	retpt = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retpt);
}
