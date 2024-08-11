#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float n, num, m = 0.0;
    float result = 0.0;
    char text[50];
    char grade[3];
    for(int i =  0 ; i < 20 ; i++){
        scanf("%s %f %s",text ,&n ,grade);
        if(grade[0] != 'P'){
            if(strcmp(grade,"A+") == 0){
                num = 4.5;
            }else if(strcmp(grade,"A0") == 0){
                num = 4.0;
            }else if(strcmp(grade,"B+") == 0){
                num = 3.5;
            }else if(strcmp(grade,"B0") == 0){
                num = 3.0;
            }else if(strcmp(grade,"C+") == 0){
                num = 2.5;
            }else if(strcmp(grade,"C0") == 0){
                num = 2.0;
            }else if(strcmp(grade,"D+") == 0){
                num = 1.5;
            }else if(strcmp(grade,"D0") == 0){
                num = 1.0;
            }else if(strcmp(grade,"F") == 0){
                num = 0.0;
            }
            result += num * n ;
            m += n;
        }
    }
    printf("%.6f",result/m);
}

/*
#include <stdio.h>
#include <string.h>

float get_grade_value(char *grade) {
    if (strcmp(grade, "A+") == 0) return 4.5;
    if (strcmp(grade, "A0") == 0) return 4.0;
    if (strcmp(grade, "B+") == 0) return 3.5;
    if (strcmp(grade, "B0") == 0) return 3.0;
    if (strcmp(grade, "C+") == 0) return 2.5;
    if (strcmp(grade, "C0") == 0) return 2.0;
    if (strcmp(grade, "D+") == 0) return 1.5;
    if (strcmp(grade, "D0") == 0) return 1.0;
    if (strcmp(grade, "F") == 0) return 0.0;
    return -1.0; // 잘못된 성적
}

int main(){
    float n, m = 0.0;
    float result = 0.0;
    char text[50];
    char grade[3];

    for (int i = 0; i < 20; i++) {
        scanf("%s %f %s", text, &n, grade);
        if (grade[0] != 'P') { // Pass 과목은 계산에서 제외
            float num = get_grade_value(grade);
            if (num != -1.0) { // 유효한 성적이면
                result += num * n;
                m += n;
            }
        }
    }

    if (m > 0) {
        printf("%.6f\n", result / m); // 결과를 소수점 여섯 자리까지 출력
    } else {
        printf("0.000000\n"); // 학점이 없는 경우 0 출력
    }

    return 0;
}
*/