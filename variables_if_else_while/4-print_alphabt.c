#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int letter_lowercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z';
			letter_lowercase++)
	{
		if (letter_lowercase == 'q' || letter_lowercase == 'e')
			continue;

		putchar(letter_lowercase);
	}

	putchar('\n');

	return (0);
}
