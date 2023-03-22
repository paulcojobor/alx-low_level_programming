#include "main.h"
/**
 * print_alphabet - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
        int i;
	int j;
	
	for (j = i; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
