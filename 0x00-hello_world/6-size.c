#include <stdio.h>
/**
 * main - C program that prints the size of various types
 * Code by Iyanda Dotun
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of  char: %zu byte(s)\n", (int) sizeof(a));
	printf("size of  int: %zu byte(s)\n", (int) sizeof(b));
	printf("size of  long int: %zu byte(s)\n", (int) sizeof(c));
	printf("size of  long long int: %zu byte(s)\n", (int) sizeof(d));
	printf("size of  float: %zu byte(s)\n", (int) sizeof(f));
	return (0);
}
