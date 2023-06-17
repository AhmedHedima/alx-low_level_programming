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

		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 0)
			{
				if (y > x && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
				}
				putchar(',');
				putchar(' ');
				z++;
			}
		y++;
		}
	x++;
	}

	return (0);
}
