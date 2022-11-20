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
    all = length, breadth, hight, base;
        switch (all)
        {
        case 1/* constant-expression */:
        printf("Entrer hight \n");
        scanf("%d",&hight);
         printf("Enter base \n");
        scanf("%d",&base);
        at=hight*base;
        printf("The area of triangel at is:", at);
           /* code */
            break;
            {

            
            case 2/* constant-expression */:
                    printf("Entrer length \n");
        scanf("%d",&length);
         printf("Enter breadth \n");
        scanf("%d",&breadth);
           ar=length*breadth;
         printf("The area of retriangel ar is:", ar);
            break;
            }
            {
            case 3/* constant-expression */:
           ac=(float) (pie*radius*radius);
         printf("The area of circle ac is:", ac); /* code */
            break;
            }
            {
            case 4/* constant-expression */:
           as= area*area;
         printf("The area of squre as:", as);
            break;
            }
        
        default:
        printf("\n you have inter inviled number:");
            break;
        }
return 0;
}