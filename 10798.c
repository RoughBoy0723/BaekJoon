
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char text[5][15] = {0};
    int len = 0 ;

    for(int i = 0 ; i < 5 ; i++){
        scanf("%s",text[i]);
    }

    for(int i = 0 ; i < 15 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(text[j][i] != '\0'){
                printf("%c",text[j][i]);
            }
        }
    }
}