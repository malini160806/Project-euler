#include <stdio.h>

int main()
{
    int maxLen = 0;
    int result = 0;

    for (int d = 2; d < 1000; d++)
    {
        int remainder = 1 % d;
        int position = 0;

        int seen[1000];

        for (int i = 0; i < d; i++)
            seen[i] = -1;

        while (remainder != 0 && seen[remainder] == -1)
        {
            seen[remainder] = position;
            remainder = (remainder * 10) % d;
            position++;
        }

        int length = 0;

        if (remainder != 0)
            length = position - seen[remainder];

        if (length > maxLen)
        {
            maxLen = length;
            result = d;
        }
    }

    printf("d = %d has longest cycle length = %d\n", result, maxLen);

    return 0;
}

