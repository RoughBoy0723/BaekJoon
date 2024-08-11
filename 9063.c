#include <stdio.h>
#include <stdlib.h>

int compar(const int *a, const int *b){
    return (*a - *b);
}

int main(){
    int size;
    scanf("%d",&size);
    int A[size], B[size];
    for(int i = 0 ; i < size ; i++){
        scanf("%d %d",&A[i],&B[i]);
    }
    qsort(A, size, sizeof(int), compar);
    qsort(B, size, sizeof(int), compar);

    //printf("%d %d ,%d %d",A[0],A[size-1],B[0],B[size-1]);
    int res;
    res = (A[0] - A[size-1]) * (B[0] - B[size-1]);
    printf("%d",res);
}