#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int counter = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + counter) >= 97 && *(s + counter) <= 122)
		*(s + counter) = *(s + counter) - 32;
	counter++;
	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + counter) == sep_words[i])
			{
				if ((*(s + (counter + 1)) >= 97) && (*(s + (counter + 1)) <= 122))
					*(s + (counter + 1)) = *(s + (counter + 1)) - 32;
				break;
			}
		}
		counter++;
	}
	return (s);
}
