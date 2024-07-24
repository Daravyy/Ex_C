#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define note "Enter a Valid Operation"
void addition();
void subtraction();
void multiplication();
void division();
void modules();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main()
{
    printf("\nWelcome to Daravy s Scientific Calculator\n");
    int choice;
    printf("\n********Press 0 to quite the program *********\n");
    printf("Enter 1 for addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for  Modules\n");
    printf("Enter 6 for Power\n");
    printf("Enter 7 for Factorial\n");
    printf("Enter 8 for Square\n");
    printf("Enter 9 for Cube\n");
    printf("Enter 10 for SquareRoot\n\n");

    while ("%d", &choice)
        ;
    switch (choice)
    {
    case 1:
        addition();
        break;

    case 2:
        subtraction();
        break;

    case 3:
        multiplication();
        break;

    case 4:
        division();
        break;

    case 5:
        modules();
        break;

    case 6:
        power();
        break;

    case 7:
        factorial();
        break;

    case 8:
        square();
        break;

    case 9:
        cube();
        break;

    case 10:
        squareroot();
        break;

    case 0:
        exit(0);
    default:
        printf("\n*******%s ******************\n", note);
    }
    return 0;
}

void addition()
{
    int a, b;
    printf("Enter the number you  want to add :");
    scanf("%d%d", &a, &b);
    printf("The  sum of a and b is %d\n", a + b);
}
void subtration()
{
    int a, b;
    printf("Enter the numbers you want to subtract  :");
    scanf("%d%d", &a, &b);
    printf("The  subtraction of a  and b is  %d\n", a - b);
}

void Multiplication()
{
    int a, b;
    printf("Enter the numbers you want to multiply  :");
    scanf("%d%d", &a, &b);
    printf("The  subtraction of a  and b is  %d\n", a * b);
}

void Division()
{
    int a, b;
    printf("Enter the numbers you want to division  :");
    scanf("%d%d", &a, &b);
    printf("The  subtraction of a  and b is  %d\n", (float)a / (float)b);
}

void Modules()
{
    int a, b;
    printf("Enter the  numbers  you  want to find modulus  of : ");
    scanf("%d%d", &a, &b);
    printf("The  Modules of a and b is %d\n", a % b);
}

void factorial()
{
    int n, factorial;
    printf("Enter the number you want the factorial of :");
    scanf("%d", &n);
    factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("\nfactorial  of %d is %d", n, factorial);
}

void power()
{
    double b;
    double p;
    printf("Enter the base and the power :");
    scanf("%lf%1f", &b, &p);
    double e = pow(b, p);
    printf("the power is  %1f", e);
}

void square()
{
    double b;
    printf("Enter the number you want the square of :");
    scanf("%lf", &b);
    double p = pow(b, 2);
    printf("The square  of %1f is %1f", b, p);
}
void cube()
{
    double b;
    printf("Enter  the number you want the cube of :");
    scanf("%lf", &b);
    double p = pow(b, 3);
    printf("The cube of  %1f is %1f", b, p);
}
void squareroot()
{
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf", &b);
    double s = sqrt(b);
    printf("The square root of  %1f is %1f", b, s);
}