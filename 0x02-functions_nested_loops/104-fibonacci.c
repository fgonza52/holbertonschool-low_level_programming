#include <stdio.h>


/**
 * main - print the first 98 Fibonacci numbers, starting with 1 and 2. \n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	long double i, j, tmp;

	i = 1;
	j = 2;

	printf("%.0Lf", i);

	for (n = 1; n < 98; n++)
	{
		printf(", %.0Lf", j);
		tmp = i;
		i = j;
		j += tmp;
	}
	putchar('\n');

	return (0);
}
