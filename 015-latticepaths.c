#include <stdio.h>

int main() {
    long long result = 1;

    for (int i = 1; i <= 20; i++) {
        result = result * (20 + i) / i;
    }

    printf("Answer = %lld\n", result);
    return 0;
}

