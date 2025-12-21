#include <stdio.h>
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return (original == reversed);
}
int main() {
    int maxPalindrome = 0;
    int a, b;
    for (a = 100; a <= 999; a++) {
        for (b = 100; b <= 999; b++) {
            int product = a * b;
            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
            }
        }
    }
    printf("Largest palindrome = %d\n", maxPalindrome);
    return 0;
}

