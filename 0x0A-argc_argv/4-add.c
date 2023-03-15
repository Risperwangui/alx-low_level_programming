#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numberbers
 * @argc: The number of arguments
 * @argv: An array of pointers
 *
 * Return: 1,if one number contains symbols that aren't digits
 */
int main(int argc, char *argv[])
{
	int number, index, sum = 0;

	for (number = 1; number < argc; number++)
	{
		for (index = 0; argv[number][index]; index++)
		{
			if (argv[number][index] < '0' || argv[number][index] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[number]);
	}

	printf("%d\n", sum);

	return (0);
}
