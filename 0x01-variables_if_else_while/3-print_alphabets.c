#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ca = 'a';
	char cb = 'A';

	while (ca <= 'z')
	{
	putchar(ca);
	ca++;
	}
	while (cb <= 'Z')
	{
	putchar(cb);
	cb++;
	}
	putchar('\n');
	return (0);
}
