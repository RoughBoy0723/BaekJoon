#include "bits/stdc++.h"

using namespace std;

int main(){
    int a, b, c;
    int cnt[10] = {0,};
    cin >> a >> b >> c;
    long long int res = a * b * c;

    string str = to_string(res);

    for(char ch : str){
        //cout << int(ch - 48) << endl;
        // int num = stoi(ch)
        cnt[int(ch - 48)]++;
    }

    for(int i = 0; i < 10 ; i++){
        cout << cnt[i] << endl;
    }
    return 0;
}