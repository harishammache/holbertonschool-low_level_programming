#include<stdio.h>
/**
 * main - Entry point
 * Description: ' prints all single digit numbers of base 10 starting'
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ListeChiffre;

	for (ListeChiffre = '0'; ListeChiffre <= '9'; ListeChiffre++)
	{
		putchar(ListeChiffre);
	}

	putchar('\n');

	return (0);
}
