#include<stdio.h>
int main()
{
int N,M;
printf("enter the two numbers:\n");
scanf("%d %d",&N,&M);
N=N+M;
if(N%2==0)
{
  printf("even",N);
}
else
printf("odd",N);
return 0;
  
}
