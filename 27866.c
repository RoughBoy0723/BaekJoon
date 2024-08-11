#include <stdio.h>

int main(){
    char *text;
    int index;
    scanf("%s", text);
    scanf("%d", &index);
    
    printf("%c", text[index-1]);
}


#include <stdio.h>

int main() {
    char text[1000]; // 충분한 크기의 배열 선언
    int index;
    
    scanf("%s", text); // 입력 받기
    scanf("%d", &index);
    
    printf("%c", text[index-1]); // 입력받은 인덱스에 해당하는 문자 출력
    
    return 0;
}
