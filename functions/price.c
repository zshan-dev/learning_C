#include <stdio.h>

int maxProfit(){
    int largest_profit = 0;
    int prices[6] = {8,1,6,4,7,4};
    for(int i = 0; i<6; i++){
        for(int j = i+1;j<6; j++){
            int money = prices[j] - prices[i];
            if(money>=largest_profit){
                largest_profit= money;
            } 
        }
    }
    if(largest_profit <= 0){
        return 0;
    }
    return largest_profit;
}   

int main(){
    printf("the most u can make is %d\n",maxProfit());
}