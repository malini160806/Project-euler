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

int main()
{
    int n = 9;

    while(1)
    {

        if(!isPrime(n))
        {
            int found = 0;

            for(int p = 2; p < n; p++)
            {
                if(isPrime(p))
                {
                    int remainder = n - p;

                    if(remainder % 2 == 0)
                    {
                        int sq = sqrt(remainder / 2);

                        if(2 * sq * sq == remainder)
                        {
                            found = 1;
                            break;
                        }
                    }
                }
            }

            if(!found)
            {
                printf("Answer = %d", n);
                break;
            }
        }

        n += 2;
    }

    return 0;
}

