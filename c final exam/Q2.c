#include<stdio.h>
#include<conio.h>
main()
{
	//wap to convert temperature from degree celsius to fahrenheit.
	
	float celsius,Fahrenheit;
	
	
	printf("Enter celsius:");
	scanf("%f",&celsius);
	
	Fahrenheit= celsius* 9/5 + 32;
	
	printf("Fahrenheit is:%.2f",Fahrenheit);
}
