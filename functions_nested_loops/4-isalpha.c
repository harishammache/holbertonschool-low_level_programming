#include "main.h"
/**
 *  _isalpha - function that checks for alphabetic character.
 *  @c: The caractere to be checked
 *
 *  Return: 1 if the letter is lowercase or uppercase. 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97  && c <= 122) && (c >= 65 && c <= 90))
	{
		return (1);

	}
	else
	{
		return (0);
	}

}
