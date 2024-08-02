#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	int last_digit=n%10;
	printf("last digit:%d\n",last_digit);
	
	while(n>9)
	{
		n=n/10;
		
	}
	printf("first digit:%d\n\n",n);
	printf("Sum of first and last digit:%d",last_digit+n);
}
