#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Description: Using putchar function
 * Only use putchar twice
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
