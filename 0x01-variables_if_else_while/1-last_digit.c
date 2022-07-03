#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main -> assign a random number to the variable n each time it is executed
 * print the last digit of the number stored in the variable n
 * Return: always 0
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	last = n % 10;
	if (last > 5)
	{
		printf("%d and is greater than 5\n", last);
	}
	if (last == 0)
	{
		printf("%d and is 0\n", last);
	}
	if (last < 6 && last != 0)
	{
		printf("%d and is less than 6 and not 0\n", last);
	}
	return (0);

}
