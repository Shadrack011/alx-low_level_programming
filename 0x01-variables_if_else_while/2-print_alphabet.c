#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Description: Using putchar function
 * Only use putchar twice.
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
