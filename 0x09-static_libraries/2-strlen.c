#include "main.h"

/**
 * _strlen - index of a string
 * @s: a pointer given by the main function
 *
 * Return: index
 */

int _strlen(char *s)

{

int index = 0;


while (s[index] != '\0')

{

index++;

}

return (index);

}

