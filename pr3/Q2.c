#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count=0;
	printf("Enter n:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		count++;
	        	
	}
	printf("Enter number digit:%d",count);
}
