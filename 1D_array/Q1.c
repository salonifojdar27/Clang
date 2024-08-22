#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a[n];
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("length of array:%d",n);
}
