#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num;
    scanf("%d",&num);
    int num_len = (int)log10(num) + 1;
    int res, sub;
    for(int i = num - (num_len * 9) ; i < num ; i++ ){
        res = i;
        sub = i;
        for(int j = 0 ; j < num_len; j ++ ){
            res += sub%10;
            sub /= 10;
        }
        if(res == num){
            printf("%d",i);
            exit(0);
        }
    }
    printf("0");
}