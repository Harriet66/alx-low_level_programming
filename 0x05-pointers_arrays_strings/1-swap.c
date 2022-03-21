#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: - pointer to int a
 * @b: - pointer to int b
 */
void swap_int(int *a, int *b)
{
	int z, y;

	z = *a;
	y = *b;
	*a = y;
	*b = z;
}
