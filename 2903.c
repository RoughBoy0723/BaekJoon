#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//sqrt(a)는 a의 제곱근
//pow(a,b)는 a의 b제곱

int main(){
    int n, line_cnt, square_cnt, dot_cnt;
    scanf("%d",&n);

    dot_cnt = 4;

    for(int i = 0; i < n ; i++){
        if(i == 0){
            dot_cnt += 5;
        }else{
            square_cnt = pow(2 , 2 * i);
            //printf("s : %d\n",square_cnt);
            line_cnt = sqrt(square_cnt);
            //printf("l : %d\n",line_cnt);
            dot_cnt += (line_cnt + 1) * (line_cnt * 2) + square_cnt;
        }
        //printf("%d\n",dot_cnt);
    }
    printf("%d",dot_cnt);
}

/*
0. 점 4개 상자 하나 

(1)

1. 점 9개 상자 4개 2의 2제곱

((2+1)*(2*2))  12+4 

2. 점 25개 상자 16개 2의 4제곱

((4+1)*(4*2)) 40 + 16

3. 점 81개 상자 64개 2의 6제곱

(( 8 + 1 ) * ( 8 * 2 )) 144 + 64
한변의 점 개수 * 변의 개수

4. 점 289개 상자 256개
(16+1) * (16*2) + 256

5 점 1089 상자 1024개

단순 수학문제 오랜만에 머리쓸려니까 아프네....
*/