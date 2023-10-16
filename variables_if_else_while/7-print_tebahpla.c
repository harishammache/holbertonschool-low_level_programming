#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int Alphabet_reverse;
	
	for (Alphabet_reverse = 'z'; Alphabet_reverse >= 'a'; Alphabet_reverse--)
	{
		putchar(Alphabet_reverse);
	}

	putchar('\n');

	return (0);
}	
