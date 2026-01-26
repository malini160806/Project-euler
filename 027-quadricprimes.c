#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int maxCount = 0;
    int bestA = 0, bestB = 0;

    for (int a = -999; a < 1000; a++)
    {
        for (int b = 2; b <= 1000; b++)
        {
            if (!isPrime(b)) continue;

            int n = 0;

            while (1)
            {
                int value = n*n + a*n + b;

                if (!isPrime(value))
                    break;

                n++;
            }

            if (n > maxCount)
            {
                maxCount = n;
                bestA = a;
                bestB = b;
            }
        }
    }

    printf("a = %d\nb = %d\n", bestA, bestB);
    printf("Product = %d\n", bestA * bestB);

    return 0;
}

