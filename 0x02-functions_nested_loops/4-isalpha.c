#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
*Description: cheack if letter uppercase or lowercase
*
*Return: 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
