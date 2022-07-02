/**
 * main.c
 * @brief LeetCode 75 Problem 1480. Running Sum of 1d Array.
 * Time Complexity: O(n) because a foor loop was employed.
 * Space Complexity: O(n) same reason.
 * Runtime: 2ms
 * Memory: 7MB
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *temp = (int*)malloc(numsSize*sizeof(int));
    int sum = 0;
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
        temp[i] = sum;
    }
    *returnSize = numsSize;
    return temp;
}
