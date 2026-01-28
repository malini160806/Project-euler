#include <stdio.h>
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main()
{
    int sum, num, temp, digit;
    int result = 0;

    for (num = 10; num <= 2540160; num++)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum += factorial(digit);
            temp /= 10;
        }

        if (sum == num)
            result += num;
    }
    printf("Answer = %d\n", result);
    return 0;
}

