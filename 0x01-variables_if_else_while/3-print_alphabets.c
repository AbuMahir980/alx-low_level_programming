#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * description - prints alphabet in lowercase and then in upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
