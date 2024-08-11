#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b){
    return (*a - *b);
}

int main(){
    while(1){
        int arr[3];
        scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
        qsort(arr, 3, sizeof(int), compare);
        if(((arr[0] == 0) && (arr[1] == 0) && (arr[2] == 0))){
            break;
        }

        if(arr[0]+arr[1] <= arr[2]){
            printf("Invalid\n");
        }else if ((arr[0] == arr[1]) && (arr[0]== arr[2]))
        {
            printf("Equilateral\n");
        }else if ((arr[0]==arr[1]) || (arr[0]==arr[2])||(arr[1]==arr[2]))
        {
            printf("Isosceles\n");
        }else{
            printf("Scalene\n");
        }
    };
}