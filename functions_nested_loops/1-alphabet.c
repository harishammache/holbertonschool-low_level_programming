#include<stdio.h>
#include "main.h"
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
*/
int main(void)
{
	int alphabet_lowercase;

	for (alphabet_lowercase = 'a';  alphabet_lowercase <= 'z';
			alphabet_lowercase++)
		{
			putchar(alphabet_lowercase);
		}
	putchar('\n');

	return (0);
}
