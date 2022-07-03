#include<stdio.h>

/**
 * main - prints the size of various types on the computer it is compiled
 * and run on
 * Return: 0 always
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	/* sizeof evaluates the size of a variable*/

	printf("Size of int: %d bytes\n", sizeof(intType));
	printf("Size of float: %d bytes\n", sizeof(floatType));
	printf("Size of double: %d bytes\n", sizeof(doubleType));
	printf("Size of char: %d byte\n", sizeof(charType));
	return (0);
}
