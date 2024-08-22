#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	float average,sum=0;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	printf("average of array:%f",average);
}
