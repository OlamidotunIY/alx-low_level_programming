#include "main.h"
#include <stdio.h>

/**
 * _strlen = counts the lenght of a string
 * @len = stores the value of the string
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
	return len;
}
