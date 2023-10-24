#include "main.h"
/**
 * rev_string - everses a string
 * @s: caractere checked
*/
void rev_string(char *s)
{
	int temporaire = 0;
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		a--;
		temporaire = s[a];
		s[a] = s[b];
		s[b] = temporaire;
	}

}
