#include<stdio.h>
int main()
{
int n,a[100],i=0,j=0,count=0,max;
printf("enter the numbers:\n");
scanf("%d",&n);
printf("enter the numbers:\n");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
if(a[j]>a[i])
  {
    a[i]=a[j];
    ++count;
  }
		}
}
printf("%d",count);
return 0;
}
