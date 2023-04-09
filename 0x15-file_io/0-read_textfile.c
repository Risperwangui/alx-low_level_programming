#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: a ponter to the file name.
 * @letters: number of letters the file should print
 * Return: if filename is NULL, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *king;

	king = malloc(sizeof(char) * letters);
		if (king == NULL)
			return (0);
	o = open(filename, O_RDONLY);
	w = write(STDOUT_FILENO, king, r);
	r = read(o, king, letters);

	if (filename == NULL)
		return (0);

	while (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(king);
		return (0);
	}

	free(king);
	close(o);

	return (w);
}
