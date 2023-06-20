#include "main.h"

/**
* main - Entry point
*
*Description: print all alphabet 10 times
*
*Return: 0 (success)
*/

void void print_alphabet_x10(void)
{
	int line, c;

	for (line = 0; line <= 9; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
