#include <stdio.h>
#include <stdlib.h>

int main(){
    int cnt;
    scanf("%d", &cnt);

    for(int i = 1 ; i < 2 * cnt ; i++){
        int star = i <= cnt ? i : 2 * cnt - i ;
        int space = cnt - star;
        for(int j = 0 ; j < space ; j++){
            printf(" ");
        }
        for(int k = 0 ; k  < 2*star-1 ; k++ ){
            printf("*");
        }
        printf("\n");
    }
}


/*
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N); // N 입력 받기
    
    // 전체 2N-1 줄에 대해 처리
    for (int i = 1; i <= 2 * N - 1; i++) {
        int stars = i <= N ? i : 2 * N - i; // 현재 줄에서 출력할 별의 개수 계산
        int spaces = N - stars; // 현재 줄에서 출력할 공백의 개수 계산

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * stars - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
*/

