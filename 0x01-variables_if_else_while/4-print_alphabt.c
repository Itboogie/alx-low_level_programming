#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: 0
 */
int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)

	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}

	putchar('\n');
	return (0);

}


