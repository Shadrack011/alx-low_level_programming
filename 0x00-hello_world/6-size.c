#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints out size of databases
 *
 * Return: 0 always
 */
int main(void)
{

	printf("size of char: %i bytes(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a float: %i byte(s)\n", sizeof(float));


	return (0);
}
