#include<stdio.h>
#include<conio.h>

void main()
{
    int First_angle;
	int second_angle;
	int angle;
	printf("Enter First angle:");
	scanf("%d",&First_angle);
	printf("Enter second angle:");
	scanf("%d",&second_angle);
	
	angle= 180-(First_angle+second_angle);
	
	printf("thirdangle:%d",angle);
	
}
