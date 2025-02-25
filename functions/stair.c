#include <stdio.h>

int minCostClimbingStairs() {
    int cost[] = {8,12,20};
    int costToPreviousStep = cost[1];   // Minimum cost to reach the step right before the current one
    int costToTwoStepsBefore = cost[0]; // Minimum cost to reach two steps before the current one
    int currentStepCost;

    for (int i = 2; i < 3; i++) { // Iterate from Step 3 to Step 5
        if (costToTwoStepsBefore < costToPreviousStep){
            currentStepCost = cost[i] + costToTwoStepsBefore;
        } else{
            currentStepCost = cost[i] + costToPreviousStep;
        }

        // Shift values forward for the next iteration
        costToTwoStepsBefore = costToPreviousStep;
        costToPreviousStep = currentStepCost;
    }

    if (costToTwoStepsBefore < costToPreviousStep){
        return costToTwoStepsBefore;
    }else {
        return costToPreviousStep;
    }
}

int main() {
    printf("The minimum cost to climb the stairs is %d\n", minCostClimbingStairs());
    return 0;
}
