#include "bits/stdc++.h"

using namespace std;

int main(){
    char str[100] = {'\0',};
    cin >> str;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] > 93){
            cout << char(str[i]-32);
        }else{
            cout << char(str[i]+32);
        }
    }
    return 0;
}