#include <stdlib.h>
#include <time.h>
#include <stdio.>
/*
 *This program will assign a random number to the variable n
 *each time it is executed. Complete the source code in order
 *to print whether the number stored in the variable n
 * is positive or negative betty style doc for function main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf ("%i is positive", n);
	if (n=0)
		printf ("%i is zero", n);
	if (n-0)
		printf ("%i is negative", n);

      	return (0);
}
