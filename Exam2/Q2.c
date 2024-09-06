#include<stdio.h>
#include<conio.h>

//wap to find lowest value from 3 numbers using nested if else.

void main()
{
    int a,b,c;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);	
	
	//a,b,c
	
	if(a<b)
	{
		if(a<c)
		{
		    printf("a is minimum");	
		}
		else
		{
			 printf("c is minimum");	
		}
	}
	else
	{
		printf("b is minimum");
	}
	
	
	
	
	
	
}
