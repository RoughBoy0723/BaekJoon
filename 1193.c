#include <stdio.h>
#include <stdlib.h>

int main(){
    int input;
    int pibot = 0;
    int i = 1;
    scanf("%d",&input);

   do{
        pibot = pibot + i;
        i++;
        //printf("%d\n",pibot);
    } while(input > pibot);
    
    i = i - 1;
    pibot = pibot - i;

    //printf("i = %d\n",i);
    //printf("pibot = %d\n", pibot);
    int head = input - pibot;
    int body = i-(input-pibot)+1;
    if(i%2 == 1){
        printf("%d/%d",body,head);
    }else{
        printf("%d/%d",head,body);

    }
}