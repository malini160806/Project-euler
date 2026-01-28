#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    if (n < 2) return 0;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int rotate(int n, int digits)
{
    int last = n % 10;
    n = n / 10;
    return last * pow(10, digits - 1) + n;
}
int main()
{
    int count = 0;

    for (int n = 2; n < 1000000; n++)
    {
        int temp = n;
        int digits = 0;

        int t = n;
        while (t > 0)
        {
            digits++;
            t /= 10;
        }

        int circular = 1;

        for (int i = 0; i < digits; i++)
        {
            if (!isPrime(temp))
            {
                circular = 0;
                break;
            }
            temp = rotate(temp, digits);
        }

        if (circular)
            count++;
    }

    printf("Answer = %d\n", count);
    return 0;
}

