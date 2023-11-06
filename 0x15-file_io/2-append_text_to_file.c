#include "main.h"

/**
 * append_text_to_file - appends text in the end of files
 * @filename: filename parameter
 * @text_content: text to be appended
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdt;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fdt = open(filename, O_WRONLY | O_APPEND);

	if (fdt == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fdt, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fdt);

	return (1);
}
