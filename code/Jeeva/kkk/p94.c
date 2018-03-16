#include <stdio.h>
int main()
{
int n,k,a[100],i;
printf("enter the number\n");
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
  scanf("%d",a[i]);
}
printf("%d",a[k-1]);
return 0;
}
