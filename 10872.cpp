#include "bits/stdc++.h"

using namespace std;

int main(){
    int N;
    long long int res = 1;
    cin >> N;
    for(int i = 1 ; i < N+1 ; i++){
        res *= i;
    }
    cout << res;
}