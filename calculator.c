#include<stdio.h>
int main() 
{
    char choice;
    
    printf("\n//Aadit's Calculator//");
    printf("\nEnter + to add");
    printf("\nEnter - to subtract");
    printf("\nEnter * to multiply");
    printf("\nEnter / to divide");
    printf("\nEnter your choice: ");
    scanf(" %c", &choice);
    
switch(choice) {
        case '+': {
            float a, b;
            printf("Enter two numbers to add: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a + b);
            break;
        }
        case '-': {
            float a, b;
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a - b);
            break;
        }
        case '*': {
            float a, b;
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", a * b);
            break;
        }
        case '/': {
            float a, b;
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &a, &b);
            if (b != 0) {
                printf("Result: %.2f\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        }
        default:
            printf("Invalid choice. Please try again.\n");
    }
    
    return 0;
}

// This code implements a simple calculator that performs:-
//addition, subtraction, multiplication, and division based on user input.//