#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int A, B;
    char *txt[3] = {"factor","multiple","neither"};

    
    while(1){
        scanf("%d %d",&A, &B);
        if(A==0, B==0)
            break;

        if(A <= B){
            if(B%A == 0)
                printf("%s\n",txt[0]);
            else
                printf("%s\n",txt[2]);
        }else if( B < A){
            if(A%B == 0)
                printf("%s\n",txt[1]);
            else
                printf("%s\n",txt[2]);
        }
    }
    
}