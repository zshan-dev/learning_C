#include <stdio.h>
#include <math.h>

int main() {
    double a = 1.0;
    double b = 0.999;
    
    double sum = a + b;
    double diff = a - b;
    
    printf("Sum: %.15f\n", sum);
    printf("Difference: %.15f\n", diff);
    
    return 0;
}
