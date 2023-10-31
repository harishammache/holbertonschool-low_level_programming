#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @value: the caractere to be checked
 * Return: value if it is positiv
*/
int _abs(int value)
{

	if (value < 0)
	{
		value = -value;
	}
	return (value);
}
