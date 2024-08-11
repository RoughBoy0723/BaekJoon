#include <stdio.h>

int main(){
    long long cnt,n;
    cnt = 0;
    scanf("%d",&n);
    for(int i = 1; i < n+1 ; i++){
        for(int j = 1; j < n+1 ; j++){
            for(int k = 1 ; k < n+1 ; k++){
                cnt++;
            }
        }
    }
    printf("%lld\n3",cnt);
}
