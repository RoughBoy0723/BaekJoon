#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[4], B[4];
    for(int i = 0 ; i < 3 ;  i++){
        scanf("%d %d",&A[i],&B[i]);
    }

    if(A[0] == A[1]){
        A[3] = A[2];
    }else if(A[0] == A[2]){
        A[3] = A[1];
    }else if(A[1] == A[2]){
        A[3] = A[0];
    }
    
    if(B[0] == B[1]){
        B[3] = B[2];
    }else if(B[0] == B[2]){
        B[3] = B[1];
    }else if(B[1] == B[2]){
        B[3] = B[0];
    }
    printf("%d %d",A[3], B[3]);
}
