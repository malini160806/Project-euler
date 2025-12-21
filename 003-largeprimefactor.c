#include <stdio.h>

int main() {
    long long num = 600851475143;
    long long i;

    for (i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            num = num / i;
        }
    }

    printf("Largest prime factor = %lld\n", num);
    return 0;
}

