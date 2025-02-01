#include <stdio.h>
#include <math.h>


int main() {
    double x = 1e-8;
    double original = sqrt(1- sqrt(1 - x * x));
    double stable_alt = x / sqrt(1 + sqrt(1- x * x));
    printf("Original:  %.16e\n", original);
    printf("Stable Alternative: %.16e\n", stable_alt);
}