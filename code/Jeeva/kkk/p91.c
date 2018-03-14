#include <stdio.h>
int main()
{
int l,w,h,t,v;
printf("enter the length,width,height\n");
scanf("%d %d %d",&l,&w,&h);
t=2*((l*w)+(w*h)+(h*l));
v=(l)*(w)*(h);
printf("total surface area:%d\n",t);
printf("volume:%d",v);
}
