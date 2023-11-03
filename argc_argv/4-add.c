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

	for (i = 1; i < argc; i++)
	{
		nombre += atoi(argv[i]);
		for (y = 0; argv[i][y]; y++)
		{
			if (!isdigit(argv[i][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc > 0 && argc < 10)
	{
		printf("%d\n", nombre);
}
	return (0);
}
