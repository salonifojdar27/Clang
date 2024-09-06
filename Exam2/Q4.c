#include<stdio.h>
#include<conio.h>

// wap to count the number of digit in a number.using for loop.
void main()
{
    int number,count,ld,n,i;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	ld=n%10;
	
	for(i=1;i<n;n++)
	{
		n=n/10;
		count++;
    }
    printf("number is:%d",count+ld);
}
