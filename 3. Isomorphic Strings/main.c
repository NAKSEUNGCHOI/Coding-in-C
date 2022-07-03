/**
 *  main.c
 *  @brief Isomorphic Strings
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isIsomorphic(char * s, char * t){
    // string length e.g. "abc", should be 3.
    int len = strlen(s);
    // 128 ASCII Numbers. Initializes to 0.
    int sCharacters[128] = {0};
    int tCharacters[128] = {0};

    // This is going to count how many times each character is visited.
    int s_counter = 1;
    int t_counter = 1;
    printf("%d", s[0]);
    // looping through with a length of 3.
    for (int i = 0; i < len; i++){
        // s[i] = 97 , sCharacters[s[i]] is equal to sCharacters[97].
        // assign 1 to sCharacters[97]
        // increment s_counter by 1.
        if (sCharacters[s[i]] == 0){
            sCharacters[s[i]] = s_counter;
            s_counter++;
        }
        // This should go through as well
        // assign 1 to s[0] as a string.
        if (sCharacters[s[i]] != 0){
            s[i] = sCharacters[s[i]]; // 96
        }
        // same as steps described above.
        if (tCharacters[t[i]] == 0){
            tCharacters[t[i]] = t_counter;
            t_counter++;
        }
        if (tCharacters[t[i]] != 0){
            t[i] = tCharacters[t[i]];
        }
        // compare two strings return 0 if different.
        if (s[i] != t[i]){
            return false;
        }
    }
    return true;
}
int main(){
    char s[] = "abb";
    char t[] = "dtt";
    int result = isIsomorphic(s, t);
    if(result == 1) printf("True");
    else printf("False");

}
