#include "main.h"
/**
 * function - for know if prime number
 * @a: first variable
 * @b: second variable
 *
 * Return: 1 if the unput integer is a prime , 0 if otherwise
*/
int function(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	return (function(a, b + 1));
}
/**
 * is_prime_number - input integer is a prime number
 * @n: variable
 *
 * Return: return 1 if the unput integer is a prime
 *	return 0 if otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (function(n, 2));
}
