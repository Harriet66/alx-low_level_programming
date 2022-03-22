#include "main.h"

/**
 * puts_half - prints a string, followed by a new line.
 * @str: pointer to the string to print.
 * Return: void
 */
void puts_half(char *str)

{
	int q, last;

	q = 0;
	while (str[q] != '\0')
	{
		q++;
	}

	last = (q + 1) / 2;

	for (q = last; str[q]; q++)
	{
		_putchar (str[q]);
	}

	_putchar ('\n');

}
