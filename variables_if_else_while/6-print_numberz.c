#include<stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Sucess)
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
