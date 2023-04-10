#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing binary number
 *
 * Return: converted number or 0 if b is NULL or if there are non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
