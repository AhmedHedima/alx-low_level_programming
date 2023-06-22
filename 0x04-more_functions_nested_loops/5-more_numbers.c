#include "main.h"

/**
 * more_numbers - print 0 - 14 10 times
 *
 * Return: 0 (success)
*/

void more_numbers(void)
{
	int n, r, c;

	for (r = 1; r <= 10; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				n = c % 10;

			}
			_putchar(n + 48);
		}
		 -putchar('\n');
	}
}
