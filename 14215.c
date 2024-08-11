#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    return(*(int*)a - *(int*)b);//오름차순
}

int main(){
    int array[3];
    scanf("%d %d %d",&array[0],&array[1],&array[2]);

    qsort(array, sizeof(array) / sizeof(array[0]) , sizeof(int), cmp);
    
    int A = array[0] + array[1];

    if(A > array[2]){
       printf("%d", A + array[2]);
    }else if (A <= array[2])
    {
       printf("%d", A + A - 1);
    }
}