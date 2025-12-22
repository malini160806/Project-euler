#include<stdio.h>
int main()
{
  int i;
  long long sum=0;
  long long sum_of_squares=0;
  long long square_of_sums;
  long long difference;
      for(i=1;i<=100;i++)
      {
        sum=sum+i;
        sum_of_squares=sum_of_squares+(i*i);
      }
      square_of_sums=sum*sum;
      difference=square_of_sums-sum_of_squares;
      printf("difference=%d\n",difference);
      return 0;
}
