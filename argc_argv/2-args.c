#include <stdio.h>
#include "main.h"
/**
 * main -  prints all arguments it receives
 * @argc: print the number of arguments
 * @argv: print argument of the line of command
 *
 * Return: always 0 (success)
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
