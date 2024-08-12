#include "bits/stdc++.h"

using namespace std;

int main(){
    long long int N, res = 0, cnt = 0;
    cin >> N;

    long long int K = 1;

    while(N >= 0){
        res += K;

        if(res > N){
            N = N - (res -K);
            if(N == 0){
                cout << cnt;
                break;
            }
            K = 0;
            res = 0;
            cnt--;
        }
        K++;
        cnt++;
    }
    return 0;
}