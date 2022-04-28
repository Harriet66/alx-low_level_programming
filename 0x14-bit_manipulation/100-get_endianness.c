#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 on big endian and 1 on little endian
 *
 **/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
