#include "main.h"
#include <stdio.h>

/*
 * The main function is the entry point of the program.
 * It initializes variables and performs a specific operation.
 * It ensures that the value at the sixth index from the memory address
 * pointed by 'p' is set to 98, which will result in printing 98 as a[2].
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

    /*
     * Write your line of code here...
     * Remember:
     * - You are not allowed to use "a"
     * - You are not allowed to modify "p"
     * - Only one statement
     * - You are not allowed to code anything else than this line of code
     */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
