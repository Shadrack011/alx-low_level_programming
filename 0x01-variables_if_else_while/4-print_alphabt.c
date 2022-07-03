#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except for q and e
 * Description: Only use putchar function
 * Only use putchar twice
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch == 'q' || ch == 'e')
	{
	}
	else
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
