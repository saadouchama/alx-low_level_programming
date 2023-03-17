#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints exactly "and that piece of art is useful"
 * @author - "Saad Ouchama", "2015-10-19",
 * @brief "this main fonction check if the number positive or negative or equal to 0 and print the result"
 * @return "Always 0 (Success)"
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	};
	if (n > 0)
	{
		printf("%d is positive\n", n);
	};
	if (n == 0)
	{
		printf("%d is zero\n", n);
	};
	return (0);
}
