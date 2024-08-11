#include <stdio.h>
#include <stdlib.h>

int main(){
    int cnt, len;
    scanf("%d", &cnt);
    char text[1000];
    for(int i = 0 ; i < cnt ; i++){
        scanf("%s",text);
        len = strlen(text);
        printf("%c%c\n", text[0],text[len-1]);
    }
}