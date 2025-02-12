#include <stdio.h>

int calculatearea(int l,int h);

int main()
{
    // int x = 5; // Variable x declared in the main function
    // int y;
    int choice1;
    int choice2;
    scanf("%d", &choice1);
    scanf("%d", &choice2);
    printf("Area: %d\n", calculatearea(choice1, choice2)); // how come we need a float?
    // printf(" Before the for loop : x = %d \n \n ", x);
    // for (int i = 0; i < 3; i++) {
    //     int y = i * 2; // Variable y declared inside the for loop
    //     printf(" Iteration : %d \n ", i);
    //     printf(" Inside the for loop : y = %d \n ", y);
    //     printf(" Inside the for loop : x = %d \n \n ", x);
    // }

    // printf(" Outside the for loop : y = %d \n ", y);
    // printf(" After the for loop : x = %d \n ", x);
}

int calculatearea(int l,int h){
    int area = l*h;
    return area; 
}