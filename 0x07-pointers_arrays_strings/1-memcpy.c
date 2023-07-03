#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: memory area
 * @src: source
 * @n: max use of byte
 * Return: pointer s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
