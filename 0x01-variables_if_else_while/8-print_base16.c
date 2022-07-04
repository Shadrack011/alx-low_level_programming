#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Description: Use putchar function
 * Only use putchar function twice.
 * Return: 0
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
