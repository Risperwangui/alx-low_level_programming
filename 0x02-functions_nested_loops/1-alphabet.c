#include "main.h"

/**
 * main - prints alphabets
 * Return: Always 0
 *
 * print_alphabet - prints alphabets in lowercase
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
