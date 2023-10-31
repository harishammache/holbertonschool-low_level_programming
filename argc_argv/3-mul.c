#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: first argument
 * @argv: second argumunt
 *
 * Return: 0 if success and 1 if error
*/
int main(int argc, char **argv)
{
	int nombre1;
	int nombre2;
	int result;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	nombre1 = atoi(argv[1]);
	nombre2 = atoi(argv[2]);
	result = nombre1 * nombre2;

	printf("%d\n", result);

	return (0);
}
