#include <stdio.h>

void print_sum(int *px, int *py) {
    int sum = *px + *py;
    *px = 2;
    printf("Sum: %d\n", sum);
}

int main() {
    int x;
    int y;
    int *px = &x;
    int *py = &y;
    *px = 5;
    *py = 7;
    
    printf("Starting the program...\n");

    // Call the print_sum function
    print_sum(px, py);

    // Bug: Adding incorrect calculation
    int z = x * y;
    printf("Incorrect result: %d\n", z);

    return 0;
}
