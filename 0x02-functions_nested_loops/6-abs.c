#include "main.h"

/**
* main - Entry point
*
*Description: computes abs of value n
*
*Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}

