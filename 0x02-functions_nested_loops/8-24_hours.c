#include "main.h"

/**
* main - Entry point
*
*Description: print all alphabet letter except q and e
*
*Return: 0 (success)
*/

void jack_bauer(void)
{
	int m, h;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');

		}
	}
}
