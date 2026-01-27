#include <stdio.h>
int isPandigital(int a, int b, int c)
{
    int used[10] = {0};
    int d;
    while (a > 0)
    {
        d = a % 10;
        if (d == 0 || used[d]) return 0;
        used[d] = 1;
        a = a / 10;
    }
    while (b > 0)
    {
        d = b % 10;
        if (d == 0 || used[d]) return 0;
        used[d] = 1;
        b = b / 10;
    }
    while (c > 0)
    {
        d = c % 10;
        if (d == 0 || used[d]) return 0;
        used[d] = 1;
        c = c / 10;
    }
    for (int i = 1; i <= 9; i++)
        if (used[i] == 0)
            return 0;
    return 1;
}
int main()
{
    int a, b, c;
    int sum = 0;
    int productUsed[10000] = {0};

    for (a = 1; a < 100; a++)
    {
        for (b = 100; b < 5000; b++)
        {
            c = a * b;

            if (c > 9999)
                break;

            if (isPandigital(a, b, c))
            {
                if (productUsed[c] == 0)
                {
                    sum += c;
                    productUsed[c] = 1;
                }
            }
        }
    }

    printf("Answer = %d\n", sum);
    return 0;
}
