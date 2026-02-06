#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;

    return 1;
}
int leftTrunc(int n)
{
    int div = 10;

    while (div <= n)
        div *= 10;

    while (n > 0)
    {
        if (!isPrime(n))
            return 0;

        n = n % (div / 10);
        div /= 10;
    }

    return 1;
}
int rightTrunc(int n)
{
    while (n > 0)
    {
        if (!isPrime(n))
            return 0;

        n /= 10;
    }
    return 1;
}
int main()
{
    int count = 0, num = 11, sum = 0;
    while (count < 11)
    {
        if (isPrime(num) && leftTrunc(num) && rightTrunc(num))
        {
            sum += num;
            count++;
        }
        num++;
    }
    printf("Sum = %d", sum);
    return 0;
}

