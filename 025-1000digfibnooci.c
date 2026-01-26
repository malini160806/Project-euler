#include <stdio.h>
#define MAX 1100
int main()
{
    int a[MAX] = {0};
    int b[MAX] = {0};
    int c[MAX] = {0};
    int sizeA = 1, sizeB = 1, sizeC;
    int index = 2;
    a[0] = 1;
    b[0] = 1;
    while (1)
    {
        int carry = 0;
        sizeC = 0;

        for (int i = 0; i < sizeA || i < sizeB; i++)
        {
            int sum = carry;
            if (i < sizeA) sum += a[i];
            if (i < sizeB) sum += b[i];
            c[i] = sum % 10;
            carry = sum / 10;
            sizeC++;
        }
        if (carry)
        {
            c[sizeC++] = carry;
        }
        index++;
        if (sizeC >= 1000)
            break;
        for (int i = 0; i < sizeB; i++)
            a[i] = b[i];
        sizeA = sizeB;

        for (int i = 0; i < sizeC; i++)
            b[i] = c[i];
        sizeB = sizeC;
    }
    printf("Index = %d\n", index);
    return 0;
}

