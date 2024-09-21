#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to find the sum of two matrices in 2d array.
	
	int i,n,j,sum=0;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	 
	int a[n][n];
	 
	for(i=1;i<=n;i++) 
	{
		for(j=1;j<=n;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=1;i<=n;i++) 
	{
		for(j=1;j<=n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	
	printf("Sum of matrices is:%d\n",sum);
	
}
