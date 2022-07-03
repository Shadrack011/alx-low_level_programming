#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Description: Use putchar function
 * only use puchar function twice
 * Do not use char variables
 * Return: 0
 */

int main(void)
{
	int i;

	do {
		putchar(i + '0');
		i++;
	} while (i <= 9);
	putchar('\n');
	return (0);
}

