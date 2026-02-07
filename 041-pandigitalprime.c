#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int isPandigital(int n)
{
    int used[10] = {0};
    int digits = 0;

    while(n > 0)
    {
        int d = n % 10;

        if(d == 0 || used[d] == 1)
            return 0;

        used[d] = 1;
        digits++;
        n /= 10;
    }
    for(int i = 1; i <= digits; i++)
    {
        if(used[i] == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int largest = 0;

    for(int i = 1; i <= 7654321; i++)
    {
        if(isPandigital(i) && isPrime(i))
        {
            if(i > largest)
                largest = i;
        }
    }

    printf("Largest Pandigital Prime = %d", largest);

    return 0;
}

