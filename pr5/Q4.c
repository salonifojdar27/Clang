#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,i,j,n1,n2,sum=0;
	
	printf("Enter the array row size:");
	scanf("%d",&r);
	printf("Enter the array column size:");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("Enter a[%d][%d]:",i,j);
	 	scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
			
		}
		printf("\n");
	}
	
	printf("Enter the array row :");
	scanf("%d",&n1);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(n1==i)
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];	
			}
			
		}
		printf("\n");
	}
	
	printf("Enter the array column :");
	scanf("%d",&n2);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(n2==j)
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];	
			}
			
		}
		printf("\n");
	}


	
	
	
	printf("sum of row:%d",sum);
	printf("\nsum of column:%d",sum);
	
}
