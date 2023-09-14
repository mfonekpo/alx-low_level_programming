#include "main.h"

/**
 * print_number - print the number
 * @n: input n
 */
void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
		a = n;
	b = a;
	c = 1;
	while (b > 9)
	{
		b /= 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
		_putchar(((a / c) % 10) + 48);
}
