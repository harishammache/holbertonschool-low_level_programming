#include "main.h"
/**
 * function - new function for condition
 * @a: first variable
 * @b: second variable
 * Return: -1  if no natural square root
*/
int function(int a, int b)
{
	if (b * b ==  a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	else
	{
		return (function(a, b + 1));
	}
}
/**
 *  _sqrt_recursion -  returns the natural square root of a number
 *  @n: first variable
 *
 *  Return: -1 if no natural square root
*/
int _sqrt_recursion(int n)
{
	return (function(n, 0));
}
