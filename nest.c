#include <stdio.h>

int main() {
    char choice;
    printf("\n// Main Menu //");
    printf("\nChoose your shape:");
    printf("\nEnter R for Rectangle");
    printf("\nEnter C for Circle");
    printf("\nEnter your choice: ");
    scanf(" %c", &choice);

    switch(choice) {
        case 'R': {
            char x;
            printf("\n// Rectangle Menu //");
            printf("\nChoose from the following:");
            printf("\nEnter A for Area");
            printf("\nEnter P for Perimeter");
            printf("\nEnter your choice:- ");
            scanf(" %c", &x);

            switch(x) {
                case 'A': {
                    float a, b;
                    printf("Enter your length and breadth to calculate area of rectangle:-");
                    scanf("%f %f", &a, &b);
                    printf("Result: %.3f\n", a * b);
                    break;
                }
                case 'P': {
                    float a, b;
                    printf("Enter your length and breadth to calculate perimeter of rectangle:-");
                    scanf("%f %f", &a, &b);
                    printf("Result: %.3f\n", 2 * (a + b));
                    break;
                }
                default:
                    printf("Invalid choice in Rectangle Menu. Please try again.\n");
            }
            break;
        }

        case 'C': {
            char x;
            printf("\n// Circle Menu //");
            printf("\nChoose from the following:");
            printf("\nEnter A for Area");
            printf("\nEnter C for Circumference");
            printf("\nEnter your choice: ");
            scanf(" %c", &x);

            switch(x) {
                case 'A': {
                    float a;
                    printf("Enter your radius to calculate area of circle: ");
                    scanf("%f", &a);
                    printf("Result: %.3f\n", 3.14 * a * a);
                    break;
                }
                case 'C': {
                    float a;
                    printf("Enter your radius to calculate circumference of circle: ");
                    scanf("%f", &a);
                    printf("Result: %.3f\n", 2 * 3.14 * a);
                    break;
                }
                default:
                    printf("Invalid choice in Circle Menu. Please try again.\n");
            }
            break;
        }

        default:
            printf("Invalid shape choice. Please try again.\n");
    }

    return 0;
}
