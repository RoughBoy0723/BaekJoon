#include "bits/stdc++.h"

using namespace std;

int main(){
    int N, M, cnt = 0;
    cin >> N >> M;

    int *N_arr = new int[N];
    for(int i = 0 ; i < N ; i++){
        cin >> *(N_arr + i);
    } 

    int *M_arr = new int[M];
    for(int j = 0 ;  j < M ; j++){
        cin >> *(M_arr + j);
    }

    int *adr;
    int dis;
    for(int k = 0 ;  k < M ; k++){
        adr = find(N_arr, N_arr + N, *(M_arr+k));
        dis = distance(N_arr, adr);
        //cout << dis << endl;
        if(dis > M - 1){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}