#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
 int i;
 printf("enter the string\n");
 gets(a);

 if((a[i]>='a'&&a[i]<='z')&&(a[i]>='A'&&a[i]<='Z')&&(a[i]>='0'&&a[i]<='9'))
 {
 
  printf("yes");
 }

 else
 printf("no");

 return 0;
}
