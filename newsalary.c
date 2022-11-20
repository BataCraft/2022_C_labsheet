#include<stdio.h>
#include<conio.h>
int main()
{
    int count = 0, working_hours = 100, over_time, salery;
    float over_time_pay;

    while(count<=0)
    {
        printf("Enter the working hours of employee no %d: ", count);
        scanf("%d", &working_hours);
        if(working_hours==8)
        {
            over_time = working_hours - 8;
            over_time_pay = over_time * 20;
            salery = over_time + 20;

            printf("Employee No %d overtime pay is %.2f\n", count, over_time_pay);
        }
        else if (working_hours > 8)
        {
            salery = over_time + 20;/* code */
        }
        else
            printf("You have to work for more than 40 hours to get over time pay\n");

        count++;
    }
}