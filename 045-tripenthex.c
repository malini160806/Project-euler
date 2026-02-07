#include <stdio.h>
#include <math.h>

int isPentagonal(long long x)
{
    double n = (1 + sqrt(1 + 24*x)) / 6;
    return (n == (long long)n);
}

int main()
{
    long long h;

    for(long long n = 144; ; n++)
    {
        h = n * (2*n - 1);

        if(isPentagonal(h))
        {
            printf("Answer = %lld", h);
            break;
        }
    }

    return 0;
}

