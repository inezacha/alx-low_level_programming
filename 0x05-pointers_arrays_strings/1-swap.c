#include "main.h"

/**
 * swap_int - the values of two integers
 * @a: pointer to first value
 * @b: pointer the second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
