#include <stdio.h>
int main()
{
	int a[100],i,b[100],c;
	printf("enter the number\n");
	scanf("%d",&c);
	printf("enter the ninja for kabali clan and opponent clan\n");
	for(i=0;i<c;i++)
	{
	
		scanf("%d %d",&a[i],&b[i]);
		a[i]=b[i]-a[i];
		printf("%d\n",a[i]);
	}
	return 0;
}
   
