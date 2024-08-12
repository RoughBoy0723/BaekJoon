#include "bits/stdc++.h"

using namespace std;

int main(){
    double fir = 0 ,sec = 0;
    cin >> fir;
    while(1){
        cin >> sec;
        if(sec == 999){
            break;
        }
        printf("%.02f\n",sec-fir);
        fir = sec;
    }
    return 0;
}