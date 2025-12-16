#include <stdio.h>

/*  Function prototypes */
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
float addfloat(float,float);
float subf(float,float);
float divf(float,float);
float mulf(float,float);

int main() {
    float a, b;
    int	choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.addfloat\n6.subf\n7.divf\n8.mulf\n");

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
	case 5:
	    printf("Result =%f\n",addfloat(a,b));
        case 6:
	    printf("Result = %f\n",subf(a,b));
	    break;
        case 7:
	    printf("Result = %f\n",divf(a,b));
	    break;
	case 8:
	    printf("Result=%f\n",mulf(a,b));
	    break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}

