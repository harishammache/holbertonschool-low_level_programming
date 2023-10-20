#include<stdio.h>
/**
 * main -  the numbers from 1 to 100
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number != 100)
		{
			if (number % 3 == 0  && number % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (number % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (number % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", number);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");

	return (number);
}
