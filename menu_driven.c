#include <stdio.h>
#include<math.h>
int main()
{
    int radius, area, length, breadth, hight, base, at, as, ac, ar, all;
    float pie=3.14;
    printf("Press 1 for triangel value\n");
    printf("Press 2 for rectangel value\n");
    printf("Press 3 for circle value\n");
    printf("Press 4 for Squre value\n");

    printf("Enter your choice");
    scanf("%d", &all);
        switch (all)
        {
        case 1/* constant-expression */:
        printf("Entrer hight \n");
        scanf("%d",&hight);
         printf("Enter base \n");
        scanf("%d",&base);
        at=hight*base;
        printf("The area of triangel at is%d:", at);
           /* code */
            break;
            {

            
            case 2/* constant-expression */:
                    printf("Entrer length \n");
        scanf("%d",&length);
         printf("Enter breadth \n");
        scanf("%d",&breadth);
           ar=length*breadth;
         printf("The area of retriangel ar is:%d", ar);
            break;
            }
            {
            case 3/* constant-expression */:
           ac=(float) (pie*radius*radius);
         printf("The area of circle ac is%d:", ac); /* code */
            break;
            }
            {
            case 4/* constant-expression */:
           as= area*area;
         printf("The area of squre as%d:", as);
            break;
            }
        
        default:
        printf("\n you have inter inviled number:");
            break;
        }
return 0;
}