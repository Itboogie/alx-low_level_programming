#include "main.h"

/**
 * print_square - prints square
 * @size: interger varibale
 *
 */
void print_square(int size)
{

int a, b;

for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
_putchar('#');
_putchar('\n');
}
if (a == 0)
_putchar('\n');
}
