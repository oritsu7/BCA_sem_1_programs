#include <stdio.h>
#include <math.h> 
#define PI 3.141592653589793

int main() {
    double angle, result;
    char op;
    printf("Enter the angle in degrees: ");
    if (scanf("%lf", &angle) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    double radians = angle * PI / 180.0; // degree -> radians
    printf("\nChoose an operation:\n");
    printf("s: sine\n");
    printf("c: cosine\n");
    printf("t: tangent\n");
    printf("e: exponential (e^x)\n");
    printf("l: logarithm (ln x)\n");
    printf("Enter your choice: ");
    if (scanf(" %c", &op) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    switch (op) {
    case 's': // Sine
        result = sin(radians);
        printf("\nSine(%.2lf degrees) = %lf\n", angle, result);
        break;
    case 'c': // Cosine
        result = cos(radians);
        printf("\nCosine(%.2lf degrees) = %lf\n", angle, result);
        break;
    case 't': // Tangent
        if (cos(radians) == 0)
            printf("Tangent is undefined at %lf degrees.\n", angle);
        else {
            result = tan(radians);
            printf("\nTangent(%.2lf degrees) = %lf\n", angle, result);
        }
        break;
    case 'e': // Exponential
        result = exp(angle); // e^angle
        printf("\nExponential(e^%.2lf) = %lf\n", angle, result);
        break;
    case 'l': // Natural Logarithm
        if (angle <= 0) // Logarithm is undefined for non-positive numbers
            printf("Logarithm is undefined for %.2lf.\n", angle);
        else {
            result = log(angle);
            printf("\nNatural Logarithm(ln %.2lf) = %lf\n", angle, result);
        }
        break;
    default:
        printf("Invalid operation. Please choose from s, c, t, e, l.\n");
        return 1;
    }
    return 0;
}
