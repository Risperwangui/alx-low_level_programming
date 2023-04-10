#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: a pointer to the file name
 * @text_content: the string to add
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ris, wan, ndu = 0;

	if (text_content != NULL)
	{
		for (ndu = 0; text_content[ndu];)
			ndu++;
	}

	if (filename == NULL)
		return (-1);

	ris = open(filename, O_WRONLY | O_APPEND);
	wan = write(ris, text_content, ndu);

	if (ris == -1 || wan == -1)
		return (-1);

	close(ris);

	return (1);
}
