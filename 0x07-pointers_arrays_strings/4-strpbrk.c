#include "main.h"

/**
 * _strpbrk - fghj
 * @s: ghjk
 * @accept: gb mi
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accrpt[j] != '\0')
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;

	}
	return (0);
}
