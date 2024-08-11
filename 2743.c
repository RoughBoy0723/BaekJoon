#include <stdio.h>
#include <stdlib.h>

int main(){
    char text[100];
    scanf("%s", text);
    int i = 0;
    while(text[i] != '\0'){
        i++;
    }
    printf("%d",i);
}