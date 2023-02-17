#include <stdio.h>

/**
 * main - prints tha alphabet in lowercase except q and e
 * Code By: Iyanda Olamidotun
 * Return: 0
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
