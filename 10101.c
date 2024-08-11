#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[3];
    for(int i = 0 ; i < 3 ; i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0] + arr[1] + arr[2] != 180){
        printf("Error");
    }else if((arr[0] == 60) && (arr[1] == 60)){
        printf("Equilateral");
    }else if((arr[0]==arr[1])||(arr[0]==arr[2])||(arr[1]==arr[2])){
        printf("Isosceles");
    }else{
        printf("Invalid");
    }
}