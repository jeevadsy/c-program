
#include<stdio.h>
int main()
{
int time=0;
int min=0;
int hour=0;
scanf("%d",&time);
min=time%60;
hour=(time-min)/60;
printf("%d %d ",hour,min);
}
