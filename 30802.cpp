#include "bits/stdc++.h"

using namespace std;

int main(){
    long long int N, T, P;
    long long int arr[6];
    int cnt = 0 ;
    cin >> N;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] ;
    cin >> T >> P;

    for(int i = 0 ;  i < 6 ; i ++){
        if(arr[i] % T == 0)
            cnt--;
        cnt += arr[i] / T + 1;
    }

    cout << cnt << endl;    
    cout << N / P << " " << N % P;
}