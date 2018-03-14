#include<stdio.h>
int main()
{
int n,a[122],s=1,i=0;
printf("enter the numbers\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
  s=s*a[i];
}
printf("product:%d",s);
return 0;
}
