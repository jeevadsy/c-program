#include<stdio.h>
int main()
{
  int n,sum,i;
  printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum+=i;
  }
  printf("sum is:%d",sum);
  return 0;
}
