#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
