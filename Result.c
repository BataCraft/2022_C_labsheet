#include<stdio.h>
#include <math.h>
int main()
{
    float m, s, c, e, ac, total, per;
    char grade;
    printf("Enter The mark of Math subject:\n", m);
    printf("Enter the mark of Science subject: \n", s);
    printf("Enter the mark of Computer: \n", c);
    printf("Enter the mark of English subject: \n", e);
    printf("Enter the mark of Account: \n", ac);
    scanf("%f%f%f%f%f", &m,&s,&c,&e,&ac);
    total = m + s + e + ac;
    printf("Total number of 5 subject %f");
    per = total*5;
    if (per >= 100)
    {
        grade = 'A';
    }
    else if ( per >= 89)
    {
        grade = 'B';
    }
    else if ( per 60>=75)
    {
        grade = 'C';
    }
    else if ( per  35>=59)
    {
        grade = 'D';
    }
    else 
    grade = 'F';
    
    printf("The grade of 5 suhbject are %f and %c: ");

}