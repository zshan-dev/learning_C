#include <stdio.h>
#include <stdbool.h>

bool twoSum(){
    int numbers[] = {2,7,11,15};
    int target = 18;
    int current = 0;
    for(int i = 0; i< 4; i++){
        for(int j = i+1; j<4; j++){
            current = numbers[i] + numbers[j];

            if(current == target){
                return true;
            }
        }
    }
    return false;
}


int main(){
    bool result = twoSum();
    if(result) {
        printf("Two numbers sum to the target.\n");
    } else {
        printf("No two numbers sum to the target.\n");
    }
}