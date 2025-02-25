#include <stdio.h>

// Function to calculate the nth Tribonacci number
long long tribonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1 || n == 2){
        return 1;
    } 
    
    // We need to calculate T3 through Tn
    // Create an array to store the Tribonacci values
    long long trib[n + 1];
    
    // Initialize the base cases
    trib[0] = 0;
    trib[1] = 1;
    trib[2] = 1;
    
    // Calculate subsequent values using the recurrence relation
    for (int i = 3; i <= n; i++) {
        trib[i] = trib[i-1] + trib[i-2] + trib[i-3];
    }
    
    return trib[n];
}

int main() {
    int y = 5;
    printf("The returend value is %lld\n", tribonacci(y));
}