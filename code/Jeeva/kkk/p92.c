#include <stdio.h>
int main()
{
int n,a,sum=0,i=0;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a);
  sum=sum+a;
}

printf("sum is:%d",sum);
}
