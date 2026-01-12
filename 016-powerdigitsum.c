#include <stdio.h>
int main() {
    int digits[400];
    int size = 1;
    digits[0] = 1;
    for (int i = 1; i <= 1000; i++) {
        int carry = 0;

        for (int j = 0; j < size; j++)
            {
            int product = digits[j] * 2 + carry;
            digits[j] = product % 10;
            carry = product / 10;
        }
        while (carry > 0)
         {
            digits[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += digits[i];
    }
    printf("Sum of digits of 2^1000 = %d\n", sum);
    return 0;
}
