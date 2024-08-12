#include "bits/stdc++.h"

using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    
    for(int i = 0 ; i < cnt-1  ; i++){
        for(int j = 0; j < i ; j++){
            cout << " ";
        }
        for(int j = 0; j < (2 * cnt) - (2 * i) - 1 ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = cnt-1 ; i >= 0 ; i--){
        for(int j = i; j > 0 ; j--){
            cout << " ";
        }
        for(int j = (2 * cnt) - (2 * i) - 1 ; j > 0  ; j--){
            cout << "*";
        }
        cout << endl;
    }
}