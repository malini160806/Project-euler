#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if(n < 2) return 0;

    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;

    return 1;
}
int isPermutation(int a, int b)
{
    int countA[10] = {0};
    int countB[10] = {0};

    while(a > 0)
    {
        countA[a % 10]++;
        a /= 10;
    }

    while(b > 0)
    {
        countB[b % 10]++;
        b /= 10;
    }

    for(int i = 0; i < 10; i++)
        if(countA[i] != countB[i])
            return 0;

    return 1;
}

int main()
{
    for(int i = 1000; i <= 9999; i++)
    {
        if(!isPrime(i)) continue;

        for(int j = i + 1; j <= 9999; j++)
        {
            if(!isPrime(j)) continue;

            int k = j + (j - i);
            if(k > 9999) continue;

            if(isPrime(k) &&
               isPermutation(i, j) &&
               isPermutation(i, k) &&
               i != 1487)
            {
                printf("Answer = %d%d%d", i, j, k);
                return 0;
            }
        }
    }

    return 0;
}

