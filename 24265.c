#include <stdio.h>

int main(){
    long long cnt,n;
    cnt = 0;
    scanf("%d",&n);
    for(int i = 0; i< n-1 ; i++){
        for(int j = i+1; j < n ; j++){
            cnt++;
        }
    }
    printf("%lld\n2",cnt);
}
