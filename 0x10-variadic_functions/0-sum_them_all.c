#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int id, sum = 0;

	va_start(nums, n);

	for (id = 0; id < n; id++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
