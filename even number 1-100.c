#include<stdio.h>
#include<conio.h>
int main ()
{
    
    int n=0;
    printf("Enter any number:\n");
    scanf("%d", &n);
    while (n <= 100) /* condition*/
    {
        n = n + 2;
        printf("The even number from 1 to 100 are:%d\n",n);
    }
return 0;
}