#include <stdio.h>
#include "main.h"
/***
 * create_file - creates a function that creates a file
 * @filename: a pointer to the filename
 * @text_content: A pointer to a string
 * Return: if the function fails, -1
 */

int create_file(const char *filename, char *text_content)
{
	int ris, wan, ndu  = 0;

	if (ris == -1 || wan == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	ris = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wan = write(ris, text_content, ndu);

	if (text_content != NULL)
	{
		for (ndu = 0; text_content[ndu];)
			ndu++;
	}

	close(ris);

	return (1);
}
