#include<stdio.h>
int main(){

int a,s,d,tot,per;
char grade;
printf("Enter marks of science:\n");
scanf("%d",&s);
printf("Enter marks of acc:\n");
scanf("%d",&a);
printf("Enter marks of dijgit:\n");
scanf("%d",&d);
tot=s+a+d;
per=tot/3;
{
if (per > 90)
    {
        grade = 'A';
        
    }
    else if ( per > 80)
    {
        grade = 'B';
    }
    else if ( per>70)
    {
        grade = 'C';
    }
    else if ( per >=50)
    {
        grade = 'D';
    }
    else 
    grade = 'F';
    
    printf("The grade of 5 suhbject are %d and %c:", per,grade);

}


}