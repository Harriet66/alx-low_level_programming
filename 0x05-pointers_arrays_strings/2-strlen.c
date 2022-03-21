#include "main.h"

/**
 * _strlen - returns length of a string by pointer
 * @s: input char pointer
 * @y: length of string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int y = 0;

	while (*s != '\0')
	{
	s++;
	y++;
	}
	return (y);
}
