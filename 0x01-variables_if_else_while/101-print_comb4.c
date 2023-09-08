#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
    int hundredsDigit;

    for (hundredsDigit = 0; hundredsDigit < 8; hundredsDigit++)
    {
        int tensDigit;

        for (tensDigit = hundredsDigit + 1; tensDigit < 9; tensDigit++)
        {
            int onesDigit;

            for (onesDigit = tensDigit + 1; onesDigit < 10; onesDigit++)
            {
                putchar(hundredsDigit + '0');
                putchar(tensDigit + '0');
                putchar(onesDigit + '0');

                if (hundredsDigit != 7 || tensDigit != 8 || onesDigit != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return 0;
}

