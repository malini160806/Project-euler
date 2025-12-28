#include <stdio.h>
int countDivisors(long long num)
{
    int count = 0;
    for (long long i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i * i == num)
                count = count + 1;
            else
               count = count + 2;
        }
    }
    return count;
}
int main()
{
    long long n = 1;
    long long triangular = 0;
    while (1)
    {
        triangular = triangular + n;
        int divisors = countDivisors(triangular);  //
        if (divisors > 500)
        {
            printf("Answer = %lld\n", triangular);
            break;
        }
        n++;
    }

    return 0;
}

