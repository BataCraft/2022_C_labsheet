#include<stdio.h>
int main()
{
    int salary, hours, extra_hours;
    printf("Enter the employee working hours \n:");
    scanf("%d", &hours);  
  /* printf("Enter the employe extra hours");  */             
   /* scanf("%d", &extra_hours);*/
    if(hours == 8 )

    {
        salary = hours*salary;
       printf("\tSalary of employee is %d \n", salary); /* code */
       
    }
     else if (hours > 8 )
    {
       salary = (((hours-8)*120)+8*100);
       printf("The salary of employee is %d :", salary); /* code */
    }
    
else 
{
salary;
    printf("error");
}
return 0;
}