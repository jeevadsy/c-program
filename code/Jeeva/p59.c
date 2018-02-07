#include <stdio.h>
int main()
{
	int i;
	int a[10],max;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
printf("maximum number is %d",max);
return 0;
}
