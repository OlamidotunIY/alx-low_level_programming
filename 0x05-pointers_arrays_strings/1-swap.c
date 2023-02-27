#include "main.h"

/**
 * swap_int - swap the value for a and b
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
