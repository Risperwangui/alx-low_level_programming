#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication ombers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 1 if not enough arguments passed in
 */
int main(int argc, char *argv[])
{
	int number1, number2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	product = number1 * number2;

	printf("%d\n", product);

	return (0);
}
