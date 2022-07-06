/**
 *  main.c
 *  @date July-05-2022
 *  @brief This is an example of a function pointer with char pointer.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *addChar(char *X, char *Y, int *sizeX, int *sizeY){
    char *temp = (char*)malloc( (*sizeX + *sizeY) * sizeof(char));
    int i = 0;
    for(i = 0; i < *sizeX+*sizeY; i++){
        if(i < *sizeX-1){
            temp[i] = X[i];
        }else{
            temp[i] = Y[i-(*sizeX-1)];
        }
    }
    printf("%s", temp);
}

int main(){
    char X[] = "Hello ";
    char Y[] = "Nakseung!";
    int sizeX = sizeof(X)/sizeof(char);
    int sizeY = sizeof(Y)/sizeof(char);

    char *temp;
    void (*p)(char*,char*,int*,int);
    p = &addChar;
    p(&X, &Y, &sizeX, &sizeY);
    //printf("%c", temp[0]);

}
