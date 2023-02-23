#include "main.h"

/**
 * _isdigit - write a function that checks for uppercase character
 * @c: characters to check
 * Iyanda Dotun
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
