#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: first pointeur
 * @accept: second pointeur
 *
 * Return: s (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	int lengthchaine;

	for (lengthchaine = 0; s[lengthchaine] != ('\0'); lengthchaine++)
	{
		int lengthsouschaine;
		int lenght = 0;

		for (lengthsouschaine = 0; accept[lengthsouschaine] != ('\0');
			lengthsouschaine++)
		{
			if (s[lengthchaine] == accept[lengthsouschaine])
			{
				lenght = 1;
				break;
			}
		}
		if (!lenght)
		{
			break;
		}
	}
	return (lengthchaine);
}

