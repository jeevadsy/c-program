#include <stdio.h>

int main()
{
char a[100];
int i;
printf("enter the numbers");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9')
{
	printf(" %s",a[i]);
	
	
}

}
	return 0;
}
