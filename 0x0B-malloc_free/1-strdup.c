#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new space in, having copy of the string param.
 * @str: string as parameter
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	if (!str)
		return (NULL);
	for (len = 0; str[len]; len++)
		ptr = (char *)malloc(len * sizeof(char));
	if (!ptr)
		return (NULL);
	for (x = 0; x <= len; x++)
		ptr[x] = str[x];
	return (ptr);
}
