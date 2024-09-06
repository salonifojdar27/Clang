#include<stdio.h>
#include<conio.h>

//wap to print all natural number in reverse using while loop.
void main()
{
	int n,ld,i=1,reverse;
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	while(n>=1)
	{
		
		ld=n%10;
		reverse=(reverse*10)+ld;
		n=n/10;
	} 
    n--; 	
	
	printf("reverse number is:%d",reverse);
}
