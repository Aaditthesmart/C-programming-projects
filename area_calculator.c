#include<stdio.h>
int main()
{
    char choice;
    printf("\nAadit's Area Calculator");
    printf("\nShapes Available To Choose:-");
    printf("\n1)Enter R for Rectangle");
    printf("\n2)Enter S for Square");
    printf("\n3)Enter C for Circle");
    printf("\n4)Enter T for Triangle");
    printf("\n4)Enter Z for Trapezium");
    printf("\n4)Enter E for Equilateral Triangle");
    printf("\nEnter your choice:-");
    scanf("%c",&choice);

    switch(choice)
    {
        case'R':{
            float a,b;
            printf("Enter your length and breadth to calculate area of rectangle:-");
            scanf("%f %f",&a,&b);
            printf("Result: %.3f\n", a * b);
            break;
        }
       case'S':{
                    float a;
            printf("Enter your side to calculate area of square:-");
            scanf("%f",&a);
            printf("Result: %.3f\n", a*a);
            break;
        }   
        
        
        case'C':{
            float a;
            printf("Enter your radius to calculate area of circle:-");
            scanf("%f",&a);
            printf("Result: %.3f\n", 3.14*a*a);
            break;
        }

        case'T':{
            float a,b;
            printf("Enter your base and height to calculate area of triangle:-");
            scanf("%f %f",&a,&b);
            printf("Result: %.3f\n", 0.5*a*b);
            break;
        }
        
        case'Z':{
            float a,b,c;
            printf("Enter your opposite sides and height to calculate area of trapezium:-");
            scanf("%f %f %f",&a,&b,&c);
            printf("Result: %.3f\n", 0.5*(a+b)*c);
            break;
        }
       
        case'E':{
            float a;
            printf("Enter your side to calculate area of equilateral triangle:-");
            scanf("%f",&a);
            printf("Result: %.3f\n", 0.43301270189221932338186158537647*a*a);
            break;
        }

        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
