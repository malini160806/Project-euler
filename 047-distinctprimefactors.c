#include <stdio.h>

int countPrimeFactors(int n)
{
    int count = 0;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;

            while(n % i == 0)
                n /= i;
        }
    }

    if(n > 1)
        count++;

    return count;
}

int main()
{
    int consecutive = 0;

    for(int i = 2; ; i++)
    {
        if(countPrimeFactors(i) == 4)
        {
            consecutive++;
        }
        else
        {
            consecutive = 0;
        }

        if(consecutive == 4)
        {
            printf("Answer = %d", i - 3);
            break;
        }
    }

    return 0;
}
