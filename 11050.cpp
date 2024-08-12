#include "bits/stdc++.h"

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int a_res = 1, b_res = 1, t_res = 1;
    for(int i = 1 ; i < a + 1 ; i++){
        a_res *= i;
    }
    for(int i = 1 ; i < b+1 ; i++){
        b_res *= i;
    }
    for(int i = 1 ; i < a - b + 1 ; i++){
        t_res *= i;
    }

    cout << a_res / (b_res * t_res);
    return 0;
}