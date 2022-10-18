#include <stdio.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 *        followed by a new line.
 *
 * Return: Always 0
 *
 *
 */
int main(void)
{
	int x;
	char ch;

	for (x = 0; x <= 9; x++)
	putchar(x + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	{
		putchar('\n');
	}
	return (0);
}
