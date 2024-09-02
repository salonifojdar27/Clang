#include<stdio.h>
#include<conio.h>

void main()
{
	int mat[3][3],i,j,n,max;
	
	printf("Enter the array row size:");
	scanf("%d",&n);
	printf("Enter the array column size:");
	scanf("%d",&n);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("Enter a[%d][%d]:",i,j);
	 	scanf("%d",&mat[i][j]);
		}
	}
	max=mat[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(max<mat[i][j])
			max=mat[i][j];
		}
	}
	
	printf("\n Largest element:%d",max);
	
}
