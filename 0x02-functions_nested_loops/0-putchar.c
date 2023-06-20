#include "main.h"

/**
* main - Entry point
*
*Description: prints _putchar using putchar prototype
*
*Return: 0 (success)
*/

int main(void)
{
	char s[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
	return (0);
}
