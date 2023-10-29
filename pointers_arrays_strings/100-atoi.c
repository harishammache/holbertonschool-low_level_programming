#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: first pointeur
 *
 * Return: if no numbers in the string, the function must return 0.
*/
int _atoi(char *s)
{
	int i = 0;
	int signe = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = 0; s[i] == '-' || s[i] == '+'; i++)
	{
		if (s[i] == '-')
		{
			signe *= -1;
		}
	}
	return (0);
}
