#include "main.h"



/**
 * _memset - a function that fills memory with a constant byte
 * @s: a char pointer given by main
 * @b: a constant byte
 * @n: how many byte of memory
 * Return: pointer to the memory s
 */



char *_memset(char *s, char b, unsigned int n)

{

	int index = 0;



	while (n > 0)

	{

		s[index] = b;



		index++;

		n--;

	}

	return (s);

}
