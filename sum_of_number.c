/*Take a number from user and Display  Sum of number*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    
    int n, sum=0, rem;
    printf("Enter the number:");
    scanf("%d", &n);
    while (n>0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;

    }
    printf("The sum of the numbers are:%d", sum);
    return 0;
}