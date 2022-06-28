#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool is_armstrong_number(int candidate);
int digit(int candidate);

int main(){
    int number;
    while(1){
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("The number %d is a armstrong number: \n", number);
        printf("%s\n", is_armstrong_number(number)? "true":"false");
    }
}
bool is_armstrong_number(int candidate){
    int count, current, sum;
    int temp = candidate;
    count = digit(temp);
    while(temp > 0){
        current = temp % 10;
        sum = sum + pow(current, count);
        temp = temp / 10;
    }
    if(sum == candidate) return 1;
    else return 0;
}
int digit(int candidate){
    int count = 0;
    while(candidate > 0){
        candidate = candidate / 10;
        count++;
    }
    return count;
}
