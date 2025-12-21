#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long lcm(int a, int b) {
    return (long long)a * b / gcd(a, b);
}
int main() {
    int i;
    long long result = 1;
    for (i = 1; i <= 20; i++) {
        result = lcm(result, i);
    }
    printf("Smallest multiple of numbers from 1 to 20 is: %lld\n", result);
    return 0;
}

