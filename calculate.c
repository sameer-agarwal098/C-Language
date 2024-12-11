// WAP to perform simple calculation tasks in c.
#include <stdio.h>

int main()
{
    double a, b;
    printf("\nEnter the Number for A:");
    scanf("%lf", &a);

    printf("\nEnter the Number for B:");
    scanf("%lf", &b);

    printf("\nAddition %.2lf and %.2lf :%.2lf", a, b, a + b);
    printf("\nSubtraction %.2lf and %.2lf :%.2lf", a, b, a - b);
    printf("\nMultiplication %.2lf and %.2lf :%.2lf", a, b, a * b);
    printf("\nDivision %.2lf and %.2lf :%.2lf", a, b, a / b);

    /*The (%) is designed to work with integer operands. If you try to use it with floating-point types like double, you will get a compilation error*/
    printf("\nModule %.2lf and %.2lf :%.2lf", a, b, (int)a % (int)b);

    return 0;
}