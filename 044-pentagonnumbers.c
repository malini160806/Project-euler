#include <stdio.h>
#include <math.h>
long pentagonal(long n)
{
    return n * (3*n - 1) / 2;
}
int isPentagonal(long x)
{
    double n = (1 + sqrt(1 + 24*x)) / 6;
    return (n == (long)n);
}

int main()
{
    long Pj, Pk, diff;

    for(long j = 1; j < 3000; j++)
    {
        Pj = pentagonal(j);

        for(long k = j + 1; k < 3000; k++)
        {
            Pk = pentagonal(k);

            diff = Pk - Pj;

            if(isPentagonal(Pk + Pj) && isPentagonal(diff))
            {
                printf("Smallest Difference = %ld", diff);
                return 0;
            }
        }
    }

    return 0;
}

