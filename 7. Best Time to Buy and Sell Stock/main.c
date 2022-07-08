/**
 *  main.c
 *  @author Nakseung Choi
 &  @date July-08-2022
 *  @brief Best Time to Buy and Sell Stock LeetCode 75 problems.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize){
    int index = 0, minimum = INT_MAX, max_profit = 0;
    if(!prices) return NULL;
    for(int i = 0; i < pricesSize; i++){
        if( minimum > prices[i] ){
            minimum = prices[i];
        }else if(prices[i] - minimum > max_profit){
            max_profit = prices[i] - minimum;
        }
    }
    return max_profit;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
