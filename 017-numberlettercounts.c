#include <stdio.h>
#include <string.h>

int main()
{
    int ones[] = {
        0, 3, 3, 5, 4, 4, 3, 5, 5, 4,
        3, 6, 6, 8, 8, 7, 7, 9, 8, 8
    };

    int tens[] = {
        0, 0, 6, 6, 5, 5, 5, 7, 6, 6
    };

    int hundred = 7;
    int thousand = 8;
    int and = 3;

    int total = 0;

    for (int i = 1; i <= 1000; i++)
    {
        int n = i;
        if (n == 1000)
        {
            total += ones[1] + thousand;
            continue;
        }

        if (n >= 100)
        {
            total += ones[n / 100] + hundred;

            if (n % 100 != 0)
                total += and;

            n = n % 100;
        }

        if (n >= 20)
        {
            total += tens[n / 10];
            n = n % 10;
        }

        total += ones[n];
    }

    printf("Total letters = %d\n", total);

    return 0;
}

