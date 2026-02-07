#include <stdio.h>
int main() {
    int maxCount = 0;
    int bestP = 0;
    for(int p = 1; p <= 1000; p++) {
        int count = 0;
        for(int a = 1; a < p/3; a++) {
            for(int b = a; b < p/2; b++) {
                int c = p - a - b;
                if(a*a + b*b == c*c) {
                    count++;
                }
            }
        }
        if(count > maxCount) {
            maxCount = count;
            bestP = p;
        }
    }
    printf("Perimeter with maximum solutions = %d\n", bestP);
    return 0;
}

