#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[100],i,n;
	 
	 printf("Enter size of the array:");
	 scanf("%d",&n);
	 
	 printf("Enter elements in array:");
	 for(i=0;i<n;i++)
	 {
	 	printf("Enter a[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 printf("\n all negative elements in array:");
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]<0)
	 	{
	 		printf("%d ",a[i]);
		 }
	 }
}
