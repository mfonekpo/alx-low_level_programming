#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
}
