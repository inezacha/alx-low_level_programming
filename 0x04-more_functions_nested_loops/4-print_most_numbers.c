/*
 * File: 4-print_most_numbers.c
 * Auth: Ineza Chanella
 */

#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			putchar((num % 10) + '0');
	}
	putchar('\n');
}
