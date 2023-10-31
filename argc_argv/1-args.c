#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -  prints the number of arguments passed into it
 * @argc: print the number of arguments
 * @argv: no use
 *
 * Return: always 0 (success)
*/
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
