#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: print the number of arguments
 * @argv: use for prints name
 *
 * Return: 0 if If no number is passed to the program
*/
int main(int argc, char **argv)
{
	int nombre = 0;
	int i, y;

	if (argv == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (y = 0; argv[i][y]; y++)
		{
			if (!isdigit(argv[i][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		nombre += atoi(argv[i]);
	}
	printf("%d\n", nombre);
	return (0);
}
