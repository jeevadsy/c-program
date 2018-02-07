#include <stdio.h>
int main()
{
	int i;
	int a[10],m;
	printf("enter the number\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
printf("maximum number is %d",m);
return 0;
}
