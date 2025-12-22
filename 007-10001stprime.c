#include<stdio.h>
int isprime(int n)
{
    int i;
    if(n<2)
        return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int count=0;
    int number=2;
    while(1)
    {
        if(isprime(number))
        {
            count++;
            if(count==10001)
            {
                printf("10001st prime number is %d\n",number);
                break;
            }
        }
        number++;
}
return 0;
}
