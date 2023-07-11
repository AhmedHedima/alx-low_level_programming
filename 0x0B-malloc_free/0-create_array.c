#include <main.h>

/**
 * *create_array - trfg
 * @size: rftgyhj
 * @c: yhu8ifc
 * Return: gy
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
