#include<stdio.h>
#include<conio.h>

void main()
{
	int maths;
	int english;
	int science;

	 float average,per;
	
	printf("Enter marks of maths:");
	scanf("%d",&maths);
	printf("Enter marks of english:");
	scanf("%d",&english);
	printf("Enter marks of science:");
	scanf("%d",&science);
	
	average=maths+english+science;
	per=average*100/300;
	printf(" average:%.2f",per);
	
	
	
}
