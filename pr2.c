#include<stdio.h>
#include<conio.h>

void main()
{
	int mark,grade;
	
	printf("Enter your mark:");
	scanf("%d",&mark);

   (mark>=80 && mark<100)
   ?printf("your grade is A\n")
   :
   (mark>=60 && mark<80)
   ?printf("your grade is B\n") 
   :
    (mark>=50 && mark<60)
    ?printf("your grade is C\n")
    : 
    (mark>=30 && mark<50)
    ?printf("your grade is D\n")
    :
   
    (mark>=0 && mark<30)
    ?printf("your grade is F\n")
    :printf("Enter valid input");
    
 printf("Enter your grade:");
    scanf("%s",&grade);


switch(mark,grade)
{
	case'A':printf("excellent work!") ;
	break;
	case 'B':printf("Well done");
	break;
	case 'C':printf("good job");
	break;
	case 'D':printf("you passed");
	break;

	case 'F':printf("sorry you failed");
		
	
		
}

if(grade=='A'|| grade=='B'|| grade=='C'|| grade=='D')
{
	printf("you are eligible for next level!");
}
else
{
	printf("Please try again next time");
}

}
