#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b){
    return (*a-*b);
}

int main(){
    long c, m;
    scanf("%ld %ld",&c ,&m);
    long arr[c];
    for(int i = 0 ; i < c ; i++){
        scanf("%ld",&arr[i]);
    }
    long size = c * (c-1) * (c-2);
    long res[size];
    long cnt = 0;
    for(int i = 0; i < c-2 ; i ++){
        for(int j = i + 1 ; j < c-1 ; j++){
            for(int k = j + 1 ; k < c ; k++){
                res[cnt] = arr[i] + arr[j] + arr[k];
                //printf("%d : %d\n",cnt,res[cnt]);
                cnt++;
            }
        }
    }
    //printf("------before sort------\n");
    qsort(res, cnt, sizeof(long), compare);
    
    size = cnt;
    // cnt = 0;
    // // while(cnt < size){
    // //     printf("%d : %d\n",cnt,res[cnt]);
    // //     cnt++;
    // // }

    cnt = 0;
    while(res[cnt] <= m){
        cnt++;
        if(cnt == size){
            break;
        }
    }
    //printf("%d\n",cnt);
    printf("%ld",res[cnt-1]);
}