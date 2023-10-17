#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @int= the caractere to be checked
 *
 * Retern: Always 0 (success)
*/
int _abs(int value)
{

	if (value < 0)
	{
		value = -value;
	}
	return (value);
}
