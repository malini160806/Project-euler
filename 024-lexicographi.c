
#include <stdio.h>

#define LIMIT 28123

int sumDivisors(int n)
{
    int sum = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;

            if (i != n / i)
                sum += n / i;
        }
    }
    return sum;
}

int main()
{
    int abundant[LIMIT + 1] = {0};
    int canBeWritten[LIMIT + 1] = {0};

    // Step 1: find abundant numbers
    for (int i = 12; i <= LIMIT; i++)
    {
        if (sumDivisors(i) > i)
            abundant[i] = 1;
    }

    // Step 2: mark sums of two abundant numbers
    for (int i = 1; i <= LIMIT; i++)
    {
        if (!abundant[i]) continue;

        for (int j = i; j <= LIMIT; j++)
        {
            if (!abundant[j]) continue;

            int sum = i + j;
            if (sum <= LIMIT)
                canBeWritten[sum] = 1;
            else
                break;
        }
    }

    // Step 3: sum all not writable numbers
    long long total = 0;

    for (int i = 1; i <= LIMIT; i++)
    {
        if (!canBeWritten[i])
            total += i;
    }

    printf("Answer = %lld\n", total);

    return 0;
}
