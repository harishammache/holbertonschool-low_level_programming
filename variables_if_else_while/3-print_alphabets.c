#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int letter_lowercase;
	int letter_uppercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
	{
		putchar(letter_lowercase);
	}

	for (letter_uppercase = 'A'; letter_uppercase <= 'Z'; letter_uppercase++)
	{
		putchar(letter_uppercase);
	}

	putchar('\n');

	return (0);
}
