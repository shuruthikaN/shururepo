#include <stdio.h>

/*  Function prototypes */
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
float subf(float,float);
int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n6.subf\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result = %d\n", add(a, b));
            break;
        case 2:
            printf("Result = %d\n", sub(a, b));
            break;
        case 3:
            printf("Result = %d\n", mul(a, b));
            break;
        case 4:
            printf("Result = %d\n", div(a, b));
            break;
        case 6:
	    printf("Result = %f\n",subf(a,b));
	    break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

