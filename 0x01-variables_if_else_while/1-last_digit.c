#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;
	
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
		printf("last digit of %d is %d and greater than 5\n", n, n % 10);
	
	else if  ((n % 10) <  6 && (n % 10) != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	return (0);
}