#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100, a++)
	{
		if ((a % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else (a != 100)
		     {
			     printf(" ");
		     }
		printf("%i", a);
	}
	printf("\n");
	return (0);
}
