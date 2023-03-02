#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @u: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *u)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (u[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (u[indx1] == leet[indx2] ||
			    u[indx1] - 32 == leet[indx2])
				u[indx1] = indx2 + '0';
		}

		indx1++;
	}

	return (u);
}
