#include<stdio.h>
int main()
{
    int m, s, c, e, t, total, per;
    char grade;
    printf("Enter The mark of Math subject:\n", m);
    printf("Enter the mark of Science subject: \n", s);
    printf("Enter the mark of Computer: \n", c);
    printf("Enter the mark of English subject: \n", e);
    printf("Enter the mark of Account: \n", t);
    scanf("%d%d%d%d%d", &m,&s,&c,&e,&t);
per = (m + s + e + c+ t)/5;
    if (per>=90&&per <= 100)
    {
        grade = 'A';
        
    }
    else if ( per >= 75&&per <=89)
    {
grade = 'B';
    }
    else if ( per>=59 &&per<=74)
    {
        grade = 'C';
    }
    else if ( per >=59)
    {
        grade = 'D';
    }
    else 
    grade = 'F';
    
    printf("The grade of 5 suhbject are %d and %c:", per,grade);

}