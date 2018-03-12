
#include <stdio.h>
 
int main() 
{
int a,i,c,b,g;
printf("enter the numbers\n ");
scanf("%d %d",&a,&b);
for(i=1;i<a;i++)
{
	if((a%i==0)&&(b%i==0))
	{
		c=i;
	}
}
g=(a*b)/c;
printf("the lcm of two numbers a=%d,b=%d is %d",a,b,g);
	return 0;
}  
