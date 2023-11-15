#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -should contain
 * @argc: first argument
 * @argv: second argument
 *
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operateur;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operateur = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operateur) == NULL || operateur[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operateur == '/' && num2 == 0) ||
	    (*operateur == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operateur)(num1, num2));

	return (0);
}
