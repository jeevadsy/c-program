#include<stdio.h>
int main()
{
	int ar[100],j,n,i,temp;

	printf(" Enter the size of the array ");
   scanf("%d",&n);
   printf("Now enter the elements in the array ");
   for(i=0;i<n;i++)
   {
 scanf("%d",&ar[i]);
 }
printf("\n Array is ");
 for(i=0;i<n;i++)
 {
  printf(" %d",ar[i]);
 }
 for(i=0;i<n;i++)
{
 for(j=0;j<n-i;j++)

{
	if(ar[j]>ar[j+1])
	{
		temp=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=temp;
        }
        }
        }
          printf("\n\n Array in the ascending order is  \n");
         for(i=0;i<n;i++)

	     {
           printf("\n %d",ar[i]);
           }
          
           return 0;
           
           }
