#include <stdio.h>
#include <math.h>

int main() {
    double a = 1.0, b = 1e8, c = 1.0;
    double discriminant = b * b - 4 * a * c;
    double sqrt_disc = sqrt(discriminant);
    double x1 = (-b - sqrt_disc) / (2 * a);
    double x2 = -(2 * c) / (b + sqrt_disc);
    printf("Root 1(x1): %.10f\n", x1);
    printf("Root 2(x2): %.10f\n", x2);
}


