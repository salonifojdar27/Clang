#include<stdio.h>
#include<conio.h>

void main()
{
	float salary,HRA,DA,TA;
	 
  printf("Enter your salary:");
  scanf("%f",& salary);
  
    HRA=10;
    DA=5;
    TA=8;
    
    salary=salary+HRA+DA+TA*100/100;
    
    printf("gross salary:%f",salary);
    
}
