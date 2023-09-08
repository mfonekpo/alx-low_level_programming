#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
    int tensDigit1, onesDigit1;

    for (tensDigit1 = 0; tensDigit1 < 10; tensDigit1++)
    {
        for (onesDigit1 = 0; onesDigit1 < 10; onesDigit1++)
        {
            int tensDigit2, onesDigit2;

            for (tensDigit2 = tensDigit1; tensDigit2 < 10; tensDigit2++)
            {
                int startDigit = (tensDigit1 == tensDigit2) ? onesDigit1 : 0;

                for (onesDigit2 = startDigit; onesDigit2 < 10; onesDigit2++)
                {
                    putchar(tensDigit1 + '0');
                    putchar(onesDigit1 + '0');
                    putchar(' ');
                    putchar(tensDigit2 + '0');
                    putchar(onesDigit2 + '0');

                    if (tensDigit1 != 9 || onesDigit1 != 9 || tensDigit2 != 9 || onesDigit2 != 9)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    putchar('\n');

    return 0;
}

