#include<stdio.h>
#include<conio.h>

void main()
{
	int height;
	int width;
	float perimeter;
	
	printf("Enter height:");
	scanf("%d",&height);
	printf("Enter width:");
	scanf("%d",&width);
	
	perimeter=2* (height+width);
	
	printf("perimeter of rectangle:%f",perimeter);
	
	
}
