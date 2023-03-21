#include <string.h>
/**
 * main - Prints numbrs 0 to 9 and letters between a to f.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char c;

        int d;
	c = 'a';
	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
