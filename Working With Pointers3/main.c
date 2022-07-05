#include <stdio.h>
#include <stdlib.h>

void Print(const char *c3); // function prototype
void print(char *c3);

int main()
{
    char c[5] = "Choi";
    printf("----------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------\n");
    printf("%length of string = d\n", strlen(c));
    printf("%s\n", c);
    for(int i = 0; i < sizeof(c); i++){
        printf("%c", c[i]);
    }
    printf("\n");
    char *c2;
    c2 = c;
    printf("c2 = %s\n", c2);
    printf("*c2 = %c\n", *c2);
    printf("c2+1 = %c\n", *(c2+1));
    printf("----------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------\n");
    char c3[] = "Hello";
    Print(c3);
    print(c3);
}
// The qualifier const can be applied to the declaration of any variable to specify that its value will not be changed
// ( Which depends upon where const variables are stored, we may change the value of const variable by using pointer ).
// The result is implementation-defined if an attempt is made to change a const.
void Print(const char *c3){
    int i = 0;
    while(*c3 != NULL){   // = '\0'
        printf("%c", *c3);
        c3++;
    }
    printf("\n");
}
void print(char *c3){
    int i = 0;
    while(c3[i] != NULL){ // Neither *c3 nor c3 works.
        printf("%c", c3[i]);
        i++;
    }
    printf("\n");
}
