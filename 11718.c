#include <stdio.h>
#include <stdlib.h>

int main(){
    char text[100];
    while(fgets(text, sizeof(text), stdin) != NULL){
        printf("%s", text);
    }
}