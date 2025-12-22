#include<stdio.h>
#include<math.h>
int sum_in(int n)
{
    return n*(n+1)/2;
}
int main()
{
int n=1000;
long long p3=(long long)floor((n-1)/3.0);
long long p5=(long long)floor((n-1)/5.0);
long long p15=(long long)floor((n-1)/15.0);

long long sum=3*sum_in(p3)+5*sum_in(p5)-15*sum_in(p15);
printf("Sum=%lld\n",sum);
return 0;
}


