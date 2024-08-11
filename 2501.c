#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N, K, len;
    scanf("%d %d", &N, &K);
    int factor[10000];

    len = 0;

    for(int i = 1 ; i <= N ; i++){
        if(N % i == 0){
            factor[len++] = i;
        }
        //printf("%d\n",factor[len-1]);
    }

    //printf("len : %d\n",len);
    if( K > len ){
        printf("0");
    }else{
        printf("%d", factor[K-1]);
    }
}