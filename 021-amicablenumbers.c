#include <stdio.h>
int sumDivisors(int n)
{
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum;
}
int main()
{
    int limit = 10000;
    int total = 0;

    for (int a = 2; a < limit; a++)
    {
        int b = sumDivisors(a);

        if (b != a && b < limit)
        {
            if (sumDivisors(b) == a)
                total += a;
        }
    }
    printf("Sum of amicable numbers = %d\n", total);
    return 0;
}

