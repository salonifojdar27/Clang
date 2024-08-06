#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	printf("Enter d:");
	scanf("%d",&d);
	
	//a,b,c,d
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
		   	printf("c is maximum");	
		}
	}
	else
	{
	  //b,c,d
	  if(b>c)
	  {
	  	if(b>d)
	  	{
	  		printf("b is maximum");
		}
		else
		{
			printf("d is maximum");
		}
	  }	
	  else
	  {
	  		printf("c is maximum");
	  }
	}
}
