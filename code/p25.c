#include<stdio.h>
int main()
{
int n,ar[n],i,j,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ar[j]<ar[i])
{
t=ar[i];
ar[i]=ar[j];
ar[j]=t;
}
	
}
	
}
printf("%d",ar[n/2]);
}

