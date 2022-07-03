#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints out size of databases
 *
 * Return: 0 always
 */
int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	long long int llit;
	char charType;

	printf("size of char: %zu bytes(s)\n", sizeof(charType));
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("size of a long long int: %zu byte(s)\n", sizeof(llit));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
