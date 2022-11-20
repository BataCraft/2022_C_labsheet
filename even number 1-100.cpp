#include<stdio.h>
int main ()
{
    int n, even, sum=0;
    printf("Enter any number:");
    scanf("%d", &n);
    while (n > 100) /* condition*/
    {
       even = n % 100;
       sum + n;
       n/=10; /* code */

    }
    printf("The even number are %d =", even);
}