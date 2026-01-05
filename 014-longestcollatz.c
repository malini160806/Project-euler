#include <stdio.h>

int main() {
    long long n;
    int steps;
    int maxSteps = 0;
    int answer = 1;

    for (int i = 1; i < 1000000; i++) {
        n = i;
        steps = 0;

        while (n != 1) {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = 3 * n + 1;

            steps++;
        }

        if (steps > maxSteps) {
            maxSteps = steps;
            answer = i;
        }
    }

    printf("Answer = %d\n", answer);
    return 0;
}

