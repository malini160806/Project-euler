#include <stdio.h>
#include <math.h>
int main()
{
    long long sum = 0;   // To store large sum
    int num, i;
    int isPrime;
    for (num = 2; num < 2000000; num++)
    {
        isPrime = 1;  // Assume number is prime

        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime == 1)
        {
            sum = sum + num;
        }
    }
    printf("Sum = %lld\n", sum);
    return 0;
}

