/**
 * main.c
 * @brief LeetCode 75 Problem 724. Find Pivot Index.
 * Time Complexity: O(n) because a foor loop was employed.
 * Space Complexity: O(n) same reason.
 * Runtime: 22ms
 * Memory: 6.7MB
 */
#include <stdio.h>
#include <stdlib.h>
int pivotIndex(int* nums, int numsSize){

    int sum = 0, leftsum = 0;

    // Find the total sum.
    for(int i = 0; i < numsSize; ++i){
        sum += nums[i];
    }

    // Test Case = [1, 7, 3, 6, 5, 6]
    // If leftsum == sum - left sum - num[i], then return the index.
    // e.g. starting 0th index,
    // 0. 0 == 28 - 0 - 1 = 27 == false
    // left sum = 1
    // 1. 1 == 28 - 1 - 7 = 20 == false
    // left sum = 8
    // 2. 8 == 28 - 8 - 3 = 17 == false
    // left sum = 11
    // 3. 11 == 28 - 11 - 6 = 11 = True
    for(int i = 0; i < numsSize; ++i){
        if(leftsum == sum - leftsum - nums[i])
            return i;
        leftsum += nums[i];
    }

    return -1;

}
int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    int numsSize = sizeof(arr)/sizeof(int);
    //printf("%d", numsSize);
    printf("%d\n", pivotIndex(arr, numsSize));
    for(int i = 0; i < 5; i++){
        printf("%d ", i);
    }
    printf("\n");
    for(int i = 0; i < 5; ++i){
        printf("%d ", i);
    }
    printf("\n");
}
