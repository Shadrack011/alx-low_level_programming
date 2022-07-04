#include <stdio.h>

/**
 * main - printing
 * Return: 0
 */

int main(void)
{
	int num;

	do {
		putchar(num + '0');
		num++;
	} while (num <= 9);
	putchar('\n');
	return (0);
}
