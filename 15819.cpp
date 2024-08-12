#include "bits/stdc++.h"

using namespace std;

int main(){
    int N,I;
    cin >> N >> I;
    string *arr = new string[N];
    for(int i = 0 ; i < N ; i++){
        cin >> *(arr + i);
    }
    sort(arr, arr+N);

    // for(int i = 0 ; i < N ; i++){
    //     cout << *(arr + i) <<endl;
    // }
    cout << *(arr + I - 1);
}