#include <stdio.h>
int digitCount(long num)
{
    int count = 0;
    while(num > 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int isPandigital(long num)
{
    int digit[10] = {0};
    int count = 0;

    while(num > 0)
    {
        int d = num % 10;

        if(d == 0 || digit[d] == 1)
            return 0;
        digit[d] = 1;
        count++;
        num /= 10;
    }
    return count == 9;
}
int main()
{
    long maxPandigital = 0;
    for(int n = 1; n < 10000; n++)
    {
        long concat = 0;
        int k = 1;

        while(digitCount(concat) < 9)
        {
            long product = n * k;
            long temp = product;
            int digits = digitCount(product);

            concat = concat;
            for(int i = 0; i < digits; i++)
                concat *= 10;
            concat += temp;
            k++;
        }

        if(digitCount(concat) == 9 && isPandigital(concat))
        {
            if(concat > maxPandigital)
                maxPandigital = concat;
        }
    }
    printf("Largest Pandigital Number = %ld", maxPandigital);
    return 0;
}

