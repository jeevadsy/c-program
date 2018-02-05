#include<stdio.h>
int main()
{
	int ar[100],n,i=0,low,high;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ar[i]);
		}
	low=ar[0];
	high=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]>high)
		{
			high=ar[i];
		}

		else
		if(ar[i]<low)
		{
			low=ar[i];
		}
	}
		printf("the highest value is %d",high);
		printf("\nthe lowest value is %d",low);
		return 0;
	}
