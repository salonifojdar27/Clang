#include<stdio.h>
#include<conio.h>
void main()
{
	//print below pattern.
	
	char i,j,k;
	
	for(i='E';i>='A';i--)
	{
		for(j='A';j<=i;j++)
		{
			printf(" %c",j);
		}
		printf("\n");
	}
	
}
