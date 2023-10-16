#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int lettre_nombre;

	for (lettre_nombre = '0'; lettre_nombre <= '9'; lettre_nombre++)
	{
		putchar(lettre_nombre);

		if (lettre_nombre != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
