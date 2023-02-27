#include "main.h"
#include <stdio.h>

/**
 * _strlen = counts the lenght of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is (success)
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	
	{
		len++;
		s++;
	}

	return (len);
}
