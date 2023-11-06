#include "main.h"

/**
 * create_file - function that create files
 * @filename: Pointer to the name of the file to be created
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: -1 if filename is null, or 1 upon success
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, len);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
