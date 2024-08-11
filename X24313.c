#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B;
    int a1, a0;
    int c, n;
    scanf("%d %d",&a1,&a0);
    scanf("%d",&c);
    scanf("%d",&n);

    A = a1 * n + a0;
    B = c * n;

    if(B >= A){
        printf("1");
    }else{
        printf("0");
    }
}