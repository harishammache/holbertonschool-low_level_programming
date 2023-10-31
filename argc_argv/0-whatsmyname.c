#include <stdio.h>
#include "main.h"
/**
 * main - prints its name
 * @argc: no use
 * @argv: use for prints name
 *
 * Return: always 0 (success)
*/
int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
