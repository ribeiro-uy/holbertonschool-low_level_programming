#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
	int saldo, moneda = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	saldo = atoi(argv[1]);
	while (saldo >= 25)
	{
		saldo -= 25;
		moneda++;
	}
	while (saldo >= 10)
	{
		saldo -= 10;
		moneda++;
	}
	while (saldo  >= 5)
	{
		saldo -= 5;
		moneda++;
	}

	while (saldo >= 2)
	{
		saldo -= 2;
		moneda++;
	}

	while (saldo == 1)
	{
		moneda++;
	}
	printf("%i\n", moneda);
	return (0);
}
