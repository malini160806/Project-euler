#include <stdio.h>

int main()
{
    long long mod = 10000000000;
    long long sum = 0;

    for(long long i = 1; i <= 1000; i++)
    {
        long long power = 1;

        for(long long j = 1; j <= i; j++)
        {
            power = (power * i) % mod;
        }

        sum = (sum + power) % mod;
    }

    printf("Last 10 digits = %lld", sum);

    return 0;
}

