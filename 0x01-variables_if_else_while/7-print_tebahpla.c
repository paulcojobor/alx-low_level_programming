#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse,
 * followed by  new line
 * Return: Always 0(Success)
 */
int main(void)
{
	char c;

	c = 'z';
	for (c = 'z'; c >= 'a'; c--;)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
