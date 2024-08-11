#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char text[100];
    scanf("%s", text);

    int len = strlen(text);
    int cnt = 0; 
    while(text[cnt] == text[len-cnt-1]){
        if(cnt >= len/2){
            break;
        }
        //printf("%c %c\n",text[cnt],text[len-cnt-1]);
        cnt++;
    }
    int line = len/2;
    //printf("%d %d\n", cnt, line);
    if(cnt == line){
        printf("1");
    }else{
        printf("0");
    }
}