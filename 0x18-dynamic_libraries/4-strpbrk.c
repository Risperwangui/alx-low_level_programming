#include "main.h"

/**
* _strpbrk - a function that searches a string for any set of bytes
* @s: a pointer what will be given by main
* @accept: a string
* Return: a pointer to s
*/

char *_strpbrk(char *s, char *accept)

{

	int i;

	int v;

	for (i = 0; s[i] != 0; i++)

	{

		for (v = 0; accept[v] != 0; v++)

			if (s[i] == accept[v])

				return (s + i);

	}



	return (0);



}
