#include "main.h"

/**
* main - Entry point
*
*Description: print the sum of even valued not exceed 4 million
*
*Return: 0 (success)
*/


int main(void)
{
	unsigned long f1 = 0, f2 = 1, s;

	float ts;

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			ts += s;
		f1 = f2;
		f2 = s;

	}
	printf("%.0f\n", ts);
	return (0);
}
