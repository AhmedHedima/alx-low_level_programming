#include "main.h"

/**
 * print_number - print 0-9
 *
 * Return: 0 (success)
*/

void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');

}
