#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to newly space in mem having copy of string param.
 * @str:string
 * Return:char
 */
char *_strdup(char *str)
{
	char *s;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];

	s[l] = '\0';

	return (s);
}
