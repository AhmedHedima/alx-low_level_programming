#include "main.h"

/**
 * *_strchr - fills memory with c
 * @s: pointer to put c
 * @c: constant
 * Return: pointer
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);

	}
	return ('\0');
}
