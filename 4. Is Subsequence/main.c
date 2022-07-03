#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSubsequence(char *s, char* t){
    if(s[0] == '\0') return true;

    for(int t_len = 0, s_len = 0; t[t_len] != '\0'; t_len++){
        if(s[s_len] == t[t_len]){
            if(s[++s_len] == '\0') return true;
        }
    }
    return false;
}

int main(){
    char s[] = "abc";
    char t[] = "ahbgdc";
    int result = isSubsequence(s, t);
    if(result == 1) printf("True");
    else printf("False");
}
