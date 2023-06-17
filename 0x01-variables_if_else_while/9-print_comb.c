#include <stdio.h>

/**
* main - Entry point
*
*Description: print 0, 1 ,-9
*
*Return: 0 (success)
*/

int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + 48);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
