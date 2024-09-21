#include<stdio.h>
#include<conio.h>

//write a c program to swap two numbers using user defined function.
int main(int a,int b);

    printf("Enter the value of a:");
    scanf("%s",&a);
    printf("Enter the value of b:");
    scanf("%s",&b);
    
void main()
{

 
     a=a+b;
     b=a-b;
     a=a-b;
   
   printf("a=%d\nb=%d",a,b);
}
