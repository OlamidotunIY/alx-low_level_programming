#include "main.h"

/**
 * reset_to_98 - takes the pointer and updates the value
 * @n: int to check
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;
	
	s = *a;
	*a = *b;
	*b = s;
}
