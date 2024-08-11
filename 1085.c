#include <stdio.h>
#include <stdlib.h>

int more_short(int x,int y){
    return ( x >= (y -x) ) ? y-x : x;
}

int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x,&y,&w,&h);

    int A, B, res;
    A = more_short(x,w);
    B = more_short(y,h);
    res = (A >= B) ? B : A;
    printf("%d",res);

}
