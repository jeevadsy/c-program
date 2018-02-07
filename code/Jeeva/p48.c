#include <stdio.h>
int main()
{
	int n,i,sum,avg;
	printf("enter the value \n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum+=i;	
	}
	avg=sum/n;
	printf("the average value is:%d",avg);
	return 0;
}
