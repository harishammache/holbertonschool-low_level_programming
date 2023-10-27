#include "main.h"
#include <stddef.h>
/**
 * _strstr -  locates a substring.
 * @haystack: pointeur one
 * @needle : pointeur second
 *
 * Return: 0 is no found
*/
char *_strstr(char *haystack, char *needle)
{
	int chaine;
	int souschaine;

	for (chaine = 0; haystack[chaine] != '\0'; chaine++)
	{	
		for (souschaine = 0; needle[souschaine] != '\0' && haystack[chaine + souschaine] == needle[souschaine];
			       	souschaine++)
		{

		}
		if (needle[souschaine] == '\0')
                {
			return (haystack + chaine);
                }
	}
	return (NULL);
}
