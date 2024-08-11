#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, money;
    scanf("%d",&n);

    for(int i = 0 ; i < n ;  i++){
        scanf("%d",&money);
        printf("%d %d %d %d\n", money / 25, (money % 25) / 10 , ((money % 25) % 10) / 5 ,((money % 25) % 10 ) % 5 );
    }
}