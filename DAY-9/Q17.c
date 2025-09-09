// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("This is not a quadratic equation (a must not be 0).\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {

        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 = %.2lf, Root2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0)
    {

        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else
    {

        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugates:\n");
        printf("Root1 = %.2lf + %.2lfi, Root2 = %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
