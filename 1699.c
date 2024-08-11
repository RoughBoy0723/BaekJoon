#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_integer_sqrt(double num) {
    double sqrt_value = sqrt(num);
    int integer_part = (int)sqrt_value;

    return (sqrt_value == integer_part);
}

int main(){
    int n ,cnt;
    scanf("%d",&n);
    cnt = 1;
    int res = n;
    int sub = n;
    
    while(1 != is_integer_sqrt(sub)){
        printf("%d : %d, %d, %d\n",cnt, res, (int)pow((int)sqrt(sub),2));
        res = res - (int)pow((int)sqrt(res),2);
        sub = res;
        cnt ++;
    }
    
    printf("%d",cnt);
}