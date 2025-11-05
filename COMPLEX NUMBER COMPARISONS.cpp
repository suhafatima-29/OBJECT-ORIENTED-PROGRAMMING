#include <stdio.h>
#include <math.h>

int main() {
    double real1, imag1, real2, imag2;
    double magnitude1, magnitude2;

    printf("Enter the real part of the first complex number: ");
    scanf("%lf", &real1);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%lf", &imag1);

    printf("Enter the real part of the second complex number: ");
    scanf("%lf", &real2);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%lf", &imag2);

    magnitude1 = sqrt(real1 * real1 + imag1 * imag1);
    magnitude2 = sqrt(real2 * real2 + imag2 * imag2);

    if (magnitude1 > magnitude2) {
        printf("The first complex number has a higher magnitude.\n");
    } else if (magnitude2 > magnitude1) {
        printf("The second complex number has a higher magnitude.\n");
    } else {
        printf("Equal\n");
    }

    return 0;
}

