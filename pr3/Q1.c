#include<stdio.h>
#include<conio.h>

void main()
{
	char ch='a';
	printf("Enter a:");
	scanf("%c",&ch);
	
	do
	{
       printf("%c  ",ch);
       ch+=4;
			
	}while(ch<='z');
}
