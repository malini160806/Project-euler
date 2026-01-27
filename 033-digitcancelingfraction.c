#include <stdio.h>
int main()
{
    int num, den;
    int a, b, c, d;
    int prod_num = 1, prod_den = 1;

    for (num = 10; num < 100; num++)
    {
        for (den = num + 1; den < 100; den++)
        {
            if (num % 10 == 0 && den % 10 == 0)
                continue;

            a = num / 10;
            b = num % 10;
            c = den / 10;
            d = den % 10;
            if (b == c && d != 0 && num * d == den * a)
            {
                prod_num *= a;
                prod_den *= d;
            }
        }
    }
    for (int i = 2; i <= prod_den; i++)
    {
        while (prod_num % i == 0 && prod_den % i == 0)
        {
            prod_num /= i;
            prod_den /= i;
        }
    }
    printf("Denominator = %d\n", prod_den);
    return 0;
}

