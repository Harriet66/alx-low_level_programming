#include "main.h"
#include <stdio.h>

/**
 * print_array - print n of int array followerd by a new line
 * @a: pointer
 * @n: n
 */
void print_array(int *a, int n)
{
	short z = 0;

	while (n-- > 0)
	{
		printf("%d", a[z++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
