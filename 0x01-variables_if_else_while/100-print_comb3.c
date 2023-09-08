#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
    int tensDigit;

    for (tensDigit = 0; tensDigit < 9; tensDigit++)
    {
        int onesDigit;

        for (onesDigit = tensDigit + 1; onesDigit < 10; onesDigit++)
        {
            putchar(tensDigit + '0');
            putchar(onesDigit + '0');

            if (tensDigit != 8 || onesDigit != 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

