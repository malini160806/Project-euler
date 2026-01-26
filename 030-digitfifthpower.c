#include <stdio.h>

int main()
{
    int pow5[10];
    for (int i = 0; i <= 9; i++)
        pow5[i] = i*i*i*i*i;

    int sum = 0;

    for (int n = 2; n <= 354294; n++)
    {
        int temp = n;
        int digitSum = 0;

        while (temp > 0)
        {
            digitSum += pow5[temp % 10];
            temp /= 10;
        }

        if (digitSum == n)
            sum += n;
    }

    printf("Answer = %d\n", sum);
    return 0;
}

