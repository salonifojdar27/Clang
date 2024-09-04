#include<stdio.h>
#include<conio.h>

//wap

int sum(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int multiply(int a, int b)
{
	return a*b;
}
int division(int a, int b)
{
	return a/b;
}
int modul(int a, int b)
{
	return a%b;
}

void main()
{

	int choice, r,h,n,result,i=1;
	
	while(i==1)
	{
	

	printf("\nPress 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
    printf("Press 4 for /\n");
	printf("Press 5 for %\n");
	printf("Press 0 for the exit.\n\n");
	
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice==6)
	{
		break;
	}
	printf("Enter the first number:");
	scanf("%d",&r);
	printf("Enter the second number:");
	scanf("%d",&h);
	
	switch(choice)
	{
		case 1:
			result=sum(r,h);
			printf("sum of %d and %d is %d:",r,h,result);
			break;
	    case 2:
		     result=sub(r,h);
			 printf("sub of %d and %d is %d:",r,h,result);
			 break;		
	    case 3:
		     result=multiply(r,h);
			 printf("multiply of %d and %d is %d:",r,h,result);
			 break;	
		case 4:
		     result=division(r,h);
			 printf("division of %d and %d is %d:",r,h,result);
			 break;	
	    case 5:
		     result=modul(r,h);
			 printf("modul of %d and %d is %d:",r,h,result);
			 break;		
		default:
		      printf("exit");	  		 
	}	
}

       printf("Code closed!");	 	
}
