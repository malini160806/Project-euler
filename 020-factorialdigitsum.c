#include <stdio.h>
int main()
{
    int digits[200];
    int size = 1;
    digits[0] = 1;
    for (int x = 2; x <= 100; x++)
    {
        int carry = 0;
        for (int i = 0; i < size; i++)
        {
            int prod = digits[i] * x + carry;
            digits[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            digits[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += digits[i];
    printf("Digit sum = %d\n", sum);
    return 0;
}

