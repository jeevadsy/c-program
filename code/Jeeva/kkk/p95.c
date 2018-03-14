#include <stdio.h>
int main()
{
int p,t,r,b;
printf("enter the amount ,time,rate\n");
scanf("%d %d %d",&p,&t,&r);
b=(p*t*r)/100;

printf("interest:%d",b);
}
