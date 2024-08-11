#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char func(int n){
    if (n < 10) return '0' + n;
    else return 'A'+ n -10;
}

int main(){
    int N, B,len;
    char text[100] = "";
    char temp;

    scanf("%d %d", &N, &B);
    
    len = 0;
    while(N > 0){
        text[len++] = func(N % B);
        //printf("%c\n",text[len-1]);
        N /= B;
    }

    for(int i = 0, j = len - 1 ; i < j ; i++, j--){
        temp = text[i];
        text[i] = text[j];
        text[j] = temp;
    }

    printf("%s\n",text);
}