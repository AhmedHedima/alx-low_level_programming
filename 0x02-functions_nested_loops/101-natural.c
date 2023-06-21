#include "main.h"

/**
* main - Entry point
*
*Description: computes the sum of multibles of 3 or 5 below 1024
*
*Return: 0 (success)
*/


int main(void)
{
	int s, n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;

	}
	printf("%d\n", s);
	return (0);
}
