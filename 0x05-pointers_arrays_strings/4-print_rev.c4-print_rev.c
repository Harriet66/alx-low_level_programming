#include "main.h"

/*
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string in reverse
 * Return: no return
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{

		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
