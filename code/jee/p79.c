#include<stdio.h>
int main()
{
	int a,b,c,d,i,flag=0;
	printf("enter the numbers\n");
	scanf("%d %d",&a,&b);
	c=a*b;
	for(i=1;i<=c/2;i++)
	{
		d=i*i;
		if(d==c)
		{
		flag=1;
		break;
		}

	}
if(flag)
printf("yes");
	else
	printf("no");
	return 0;
}
