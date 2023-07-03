#include "main.h"

/**
 * *_memst - fills memory with constant
 * @s: pointer to insert constant
 * @b: constant
 * @n: max use of byte
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
