#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if(c != 4 && c != 2)
	_putchar(c);
	}
	_putchar('\n');
}
