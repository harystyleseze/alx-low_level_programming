#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters to POSIX
 * @filename: filename parameter
 * @letters: numbers of letters to be printed
 *
 * Return: numbers of letters printed, or 0 if It fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdt;
	ssize_t nd, nw;
	char *buff;

	if (!filename)
		return (0);

	fdt = open(filename, O_RDONLY);

	if (fdt == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nd = read(fdt, buff, letters);
	nw = write(STDOUT_FILENO, buff, nd);

	close(fdt);

	free(buff);

	return (nw);
}
