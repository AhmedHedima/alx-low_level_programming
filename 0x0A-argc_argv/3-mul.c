#include <stdio.h>
#include <stdlib.h>

/**
 * main - gyh
 * @argc: fgh
 * @argv: ijv
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
