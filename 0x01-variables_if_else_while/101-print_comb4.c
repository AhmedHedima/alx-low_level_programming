#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Result: 0 (success)
*/

int main(void)
{
	int x = 0, y, z;

	while (x <= 9)
	{
		putchar(x);
		y = 0;
		while (y <= 9)
		{
			if (y != x)
			{
			putchar(y);
			z = 0;
			}
			while (z <= 0)
			{
				if (y != z && x != z)
				{
				putchar(z);
				}
				z++;
			}
		y++;
		}
	x++;
	}
	putchar(',');
	putchar(' ');
	return (0);
}
