#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * master - Determines if a number is a positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time0));
	n = rand() - RAND_MAX/2;
	if (n>0)
	{
		print("%d is positive\n",n);
	}
	else if (n == 0)
	{
		print("%d is negative\n",n);
	}
	return (0);
}

