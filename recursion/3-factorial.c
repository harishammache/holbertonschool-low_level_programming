#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: pointeur
 *
 * Return: 0 if n is lower, -1 if error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
