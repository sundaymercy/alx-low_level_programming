#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - functions: a program that adds positive numbers
 * @argc:int argument count
 * @argv:string vector of arrays
 * Return:int 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
