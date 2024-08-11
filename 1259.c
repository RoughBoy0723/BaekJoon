#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int num, len;
    int bull;
    while(1){
        bull = 0;
        scanf("%d",&num);
        if(num == 0){
            break;
        }
        char str[10];
        sprintf(str,"%d",num);
        len = strlen(str);
        for(int i = 0, j = len-1; i < len ; i++ ,j--){
            if(str[i] != str[j]){
                bull = 1;
            }
        }
        if(bull == 1){
            printf("no\n");
        }else{
            printf("yes\n");
        }
        
    }

}