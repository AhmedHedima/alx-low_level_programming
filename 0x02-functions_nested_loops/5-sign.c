#include "main.h"

/**
* main - Entry point
*
*Description: checks n sign
*
*Return: 1 if +, 0 if 0 and -1 if - (success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
