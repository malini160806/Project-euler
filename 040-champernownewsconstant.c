#include <stdio.h>
#include <string.h>
int main() {
    int targets[] = {1,10,100,1000,10000,100000,1000000};
    int targetIndex = 0;

    int position = 0;
    int result = 1;
    for(int number = 1; position <= 1000000; number++) {

        char digits[20];
        sprintf(digits, "%d", number);

        for(int i = 0; i < strlen(digits); i++) {
            position++;

            if(position == targets[targetIndex]) {
                result *= (digits[i] - '0');
                targetIndex++;
            }
        }
    }
    printf("Answer = %d", result);
    return 0;
}

