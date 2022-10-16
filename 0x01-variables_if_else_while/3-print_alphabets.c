#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints trhe alphabet in lowercase
 * and then in uppercase,followed by new line.
 *
 * Return: 0
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
