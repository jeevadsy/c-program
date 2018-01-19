#include <stdio.h>

int main()
{
	int i,a[100],min,k;
	printf("enter the number");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("enter the elements");
	
	scanf("%d",&a[i]);
	min=a[0];
}
	for(i=0;i<k;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("the minimum element in the array is %d",min);
	return 0;
}   
