#include <stdio.h>
#include <math.h>

#define LIMIT 1000000

int isPrime(int n)
{
    if(n < 2) return 0;

    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int primes[80000];
    int count = 0;


    for(int i = 2; i < LIMIT; i++)
    {
        if(isPrime(i))
            primes[count++] = i;
    }

    int maxLength = 0;
    int answer = 0;
    for(int i = 0; i < count; i++)
    {
        long sum = 0;

        for(int j = i; j < count; j++)
        {
            sum += primes[j];

            if(sum >= LIMIT)
                break;

            if(isPrime(sum) && (j - i + 1 > maxLength))
            {
                maxLength = j - i + 1;
                answer = sum;
            }
        }
    }

    printf("Answer = %d", answer);

    return 0;
}

