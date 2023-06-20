#include "main.h"

/**
* main - Entry point
*
*Description: print all alphabet letter except a - z
*
*Return: 0 (success)
*/

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	return (0);
}
