#include "main.h"

/**
 * swap_int - gives the value of @n to b and gives the value of @b to @a
 * @a: first int
 * @b: second int
 * @n: temporary variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
