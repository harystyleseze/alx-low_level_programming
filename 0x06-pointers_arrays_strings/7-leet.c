#include "main.h"
/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int stringCounter, leetCounter;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/*  scan through string */
	stringCounter = 0;
	while (s[stringCounter] != '\0')
/* check whether leetLetter is found */
	{
		leetCounter = 0;
		while (leetCounter < 10)
		{
			if (leetLetters[leetCounter] == s[stringCounter])
			{
				s[stringCounter] = leetNums[leetCounter];
			}
			leetCounter++;
		}
		stringCounter++;
	}
	return (s);
}
