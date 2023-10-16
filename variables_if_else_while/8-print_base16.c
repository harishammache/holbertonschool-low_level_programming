#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int premier_nombre;
	int deuxieme_nombre;

	for (premier_nombre = '0'; premier_nombre <= '9'; premier_nombre++)
	{
		putchar(premier_nombre);
	}

	for (deuxieme_nombre = 'a'; deuxieme_nombre <= 'f'; deuxieme_nombre++)
	{
		putchar(deuxieme_nombre);
	}

	putchar('\n');

	return (0);
}
