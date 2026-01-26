#include <stdio.h>

#define MAX 100
#define PRIMES 25
#define TERMS 10000

int primes[PRIMES] = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
    31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    73, 79, 83, 89, 97
};

int main()
{
    int seen[TERMS][PRIMES] = {0};
    int count = 0;

    for (int a = 2; a <= 100; a++)
    {
        int baseExp[PRIMES] = {0};
        int temp = a;

        for (int i = 0; i < PRIMES; i++)
        {
            while (temp % primes[i] == 0)
            {
                baseExp[i]++;
                temp /= primes[i];
            }
        }

        for (int b = 2; b <= 100; b++)
        {
            int exists = 0;


            for (int k = 0; k < count; k++)
            {
                int same = 1;

                for (int i = 0; i < PRIMES; i++)
                {
                    if (seen[k][i] != baseExp[i] * b)
                    {
                        same = 0;
                        break;
                    }
                }

                if (same)
                {
                    exists = 1;
                    break;
                }
            }


            if (!exists)
            {
                for (int i = 0; i < PRIMES; i++)
                    seen[count][i] = baseExp[i] * b;

                count++;
            }
        }
    }

    printf("Distinct terms = %d\n", count);
    return 0;
}
