#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ans;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	
	ans=a*a+2*a*b+b*b;
	
	printf("Area is:%d",ans);
}
