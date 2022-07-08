/**
 *  main.c
 *  @author Nakseung Choi
 *  @date July-08-2022
 *  @brief Finding the longest Palindrome.
 *  One interesting observation was creating an array dynamically takes up more runtime?
 *  I first created an array of 52. The runtime was 0ms faster than 100% of other submissions.
 *  My Memory usage was only around 30% higher. Therefore, I decided to create an array of 52 using calloc.
 *  The memory usage was improved as expected, but the runtime got worse.
 */
#include <stdio.h>
#include <stdlib.h>

int longestPalindrome(char * s){
    int len = strlen(s);
    int *hash = (int*)calloc(52, sizeof(int));
    int num = 0;
    for(int i = 0; i < len; i++){
        if(islower(s[i])){
            hash[s[i]-'a']++;
        }
        if(!islower(s[i])){
            hash[s[i]-38]++;
        }
    }
    for(int i = 0; i < 52; i++){
        if(hash[i] % 2 == 0 && hash[i] != 0){
            num = num + hash[i];
        }else if(hash[i] % 2 != 0){
            num = num + hash[i] - 1;
        }
    }
    if(len - num > 0){
        num = num + 1;
    }
    free(hash);
    return num;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
