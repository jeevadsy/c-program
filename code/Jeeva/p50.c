#include <stdio.h>
void main()
{
int n,t,flag;
printf("enter the number\n");
scanf("%d",&n);
t=n;
flag=0;
while(t!=1)
{
if(t%2!=0)
{
flag=1;
break;
}
t=t/2;
}
if(flag==0)
printf("number %d is power of 2",n);
else
printf("number %d is not a power of 2",n);
}
