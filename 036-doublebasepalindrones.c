#include <stdio.h>
int isPalindrome10(int n)
{
    int rev = 0, temp = n;

    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    return (rev == n);
}
int isPalindrome2(int n)
{
    int bin[32];
    int i = 0;
    while (n > 0)
    {
        bin[i++] = n % 2;
        n /= 2;
    }
    int start = 0;
    int end = i - 1;

    while (start < end)
    {
        if (bin[start] != bin[end])
            return 0;

        start++;
        end--;
    }

    return 1;
}

int main()
{
    int sum = 0;

    for (int n = 1; n < 1000000; n++)
    {
        if (isPalindrome10(n) && isPalindrome2(n))
            sum += n;
    }

    printf("Answer = %d\n", sum);

    return 0;
}

