#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to give a grade from percentage.
	
	int percentage;
	
	printf("Enter the percentage:");
	scanf("%d",&percentage);
	
	if(percentage>=90)
	{
		printf("you got grade A:");
	}
	else if(percentage>=80)
	{
		printf("you got grade B:");
	}
	else if(percentage>=70)
	{
		printf("you got grade C:");
	}
	else if(percentage>=60)
	{
		printf("you got grade D:");
	}
	else if(percentage>=40)
	{
		printf("you get grade E:");
	}
	else if(percentage<=40)
	{
		printf("you are failed!");
	}
	
}
