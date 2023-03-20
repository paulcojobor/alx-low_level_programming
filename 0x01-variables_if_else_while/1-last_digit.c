#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Lat digit of %d is %d and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is ess than 6 and not 0", n, m);
	print("\n");
	return (0);
}
