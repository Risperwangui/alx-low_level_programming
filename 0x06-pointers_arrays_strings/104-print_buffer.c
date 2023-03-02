#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int byte, id;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (id = 0; id < 10; id++)
		{
			if ((id + byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + id + byte));

			if ((id % 2) != 0 && id != 0)
				printf(" ");
		}

		for (id = 0; id < 10; id++)
		{
			if ((id + byte) >= size)
				break;

			else if (*(b + id + byte) >= 31 &&
				 *(b + id + byte) <= 126)
				printf("%c", *(b + id + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
