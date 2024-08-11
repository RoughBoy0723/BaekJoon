#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int func(char n){
    int num;
    if(n =='A')
        num = 10;
    else if (n == 'B')
        num = 11;
    else if (n == 'C')
        num = 12;
    else if (n == 'D')
        num = 13;
    else if (n == 'E')
        num = 14;
    else if (n == 'F')
        num = 15;
    else if (n == 'G')
        num = 16;
    else if (n == 'H')
        num = 17;
    else if (n == 'I')
        num = 18;
    else if (n == 'J')
        num = 19;
    else if (n == 'K')
        num = 20;
    else if (n == 'L')
        num = 21;
    else if (n == 'M')
        num = 22;
    else if (n == 'N')
        num = 23;
    else if (n == 'O')
        num = 24;
    else if (n == 'P')
        num = 25;
    else if (n == 'Q')
        num = 26;
    else if (n == 'R')
        num = 27;
    else if (n == 'S')
        num = 28;
    else if (n == 'T')
        num = 29;
    else if (n == 'U')
        num = 30;
    else if (n == 'V')
        num = 31;
    else if (n == 'W')
        num = 32;
    else if (n == 'X')
        num = 33;
    else if (n == 'Y')
        num = 34;
    else if (n == 'Z')
        num = 35;
    else if (n == '1')
        num = 1;
    else if (n == '2')
        num = 2;
    else if (n == '3')
        num = 3;
    else if (n == '4')
        num = 4;
    else if (n == '5')
        num = 5;
    else if (n == '6')
        num = 6;
    else if (n == '7')
        num = 7;
    else if (n == '8')
        num = 8;
    else if (n == '9')
        num = 9;
    else if (n == '0')
        num = 0;    
    return num;
}


int main(){
    char N[100];
    int B, res = 0;

    scanf("%s %d", N, &B);
    int len = strlen(N);

    //("N : %s\n len : %d\n B : %d\n",N, len, B);
    for(int i = len-1, j = 0 ; i >= 0 ; i--,j++){
        int k = func(N[i]);
        //printf("k = %d\n",k);
        if(i == len - 1){
            res += k;
        }else{
            res += k*pow(B,j);
        }
    }
    printf("%d\n",res);
}