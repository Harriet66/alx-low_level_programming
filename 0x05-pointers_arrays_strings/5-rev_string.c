#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */
void rev_string(char *s)
{

	int i, j, k;
	char z;

	for (i = 0; s[i] != '\0'; i++)

	j = 0;

	k = i / 2;

	while (k--)
	{
		z = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = z;
		j++;
	}

}
