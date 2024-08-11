#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    while(1){
        int N, len;
        int factor[10000] = {0};
        int cp = 0;
        scanf("%d", &N);

        len = 0;
        for(int i = 1 ; i <= N ; i++){
            if(N % i == 0){
                factor[len++] = i;
            }
        }

        for(int i = 0 ; i < len-1; i ++){
            cp += factor[i];
            //printf("cp = %d, factor[%d] = %d\n",cp, i, factor[i]);
        }
        
        if( N == -1 ){
            return 0;
        }

        if( N == -1 ){
            return 0;
        }


        if(cp == N){
            printf("%d = ",N);
            for(int i = 0 ; i < len - 1 ; i++){
                printf("%d", factor[i]);
                if(i != len - 2)
                    printf(" + ");
            }
            printf("\n");
        }else{
            printf("%d is NOT perfect.\n", N);
        }

        
    }
}