#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:print all alphabet letter
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}
