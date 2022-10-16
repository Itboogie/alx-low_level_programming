#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The variable n will store a different value
 * every time you will run this program.
 *
 * Return: 0
 */
int main(void)

{


	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0)
		{
		printf("%s is %d\n", "nagative", n);
		}
	else if   (n > 0)
	{
		printf("%s is %d\n", "positive", n);
	}
	else
	{
		printf("%s is %d\n", "zero", n);
	}
	return (0);
}


