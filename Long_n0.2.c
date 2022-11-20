//Ask user  to entry a number  and make menu driven program to do the following
/*a. display reverse number
b, Count number of digits 
c. Sum of digits
d. find even or odd
e. exit */
#include<stdio.h>
int main()
{
    int n, rem, rev = 0 , count = 0, sum = 0, choice;
    printf("Press 1 for reverse number:\n");
    printf("Press 2 for count number of digits:\n");
    printf("Press 3 for sum of digits :\n");
    printf("Press 4 for Find Even or Odd number:\n");
    printf("Enter your choise:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:/* constant-expression */
        printf("Enter an integer :\n");
        scanf("%d", &n);
        while (n!=0)
        {
           rem = n%10; /* code */
           rev = rev*10 + rem;
           n/=10;
        }
        printf("The Reverse number are:%d", rev);
        
        break;

case 2:
    printf("Enter num:");
    scanf("%d", &n);
    while (n!=0)

    {
        n=n/10;
        count++;/* code */
    }
    printf("\nThe count of digit number are:%d", count);
    break;

case 3:
printf("Enter the number:");
    scanf("%d", &n);
    while (n>0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;

    }
    printf("The sum of the numbers are:%d", sum);
    break;
case 4:
printf("Enter an integer: ");
    scanf("%d", &n);

    // true if num is perfectly divisible by 2
    if(n % 2 == 0)
        printf("%d is even.", n);
    else
        printf("%d is odd.", n);
break;
default:
printf("Exit");
    }
}