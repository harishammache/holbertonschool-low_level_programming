#include "main.h"
/**
 * leet - replace letter by nomber
 * @rep : pointeur
 *
 * Return: rep (success)
*/
char *leet(char *rep)
{
	int a, b;
	char TAB1[] = "aAeEoOtTlL";
	char TAB2[] = "4433007711";

	for (a = 0; rep[a] != '\0'; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (rep[a] == TAB1[b])
			{
				rep[a] = TAB2[b];
			}
		}

	}
	return (rep);
}
