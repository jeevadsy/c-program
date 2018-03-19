#include<stdio.h>
int main() 
{
 int a,b=1,n,i;
 printf("enter the number limit\n");
 scanf("%d ",&n);
 printf("enter the number\n");
 scanf("%d",&a);
for(i=0;i<n;i++)
{
b=b*a;	
}
 printf("the power value is:%d",b);
  return 0;
}
