#include <stdio.h>
int main()
{
	int a,b,t;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	printf("the inputs are%d %d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("the swaped numbers are%d %d",a,b);
	return 0;
	
}
