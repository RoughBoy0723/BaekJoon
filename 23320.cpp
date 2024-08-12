#include "bits/stdc++.h"

using namespace std;

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}


int main(){
    int N, Y, cnt =0 ;
    double X;
    cin >> N;
    int* arr = new int[N];

    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    cin >> X >> Y;

    for(int i = 0 ; i < N ; i++){
        if(arr[i] >= Y) cnt++;
    }

    // qsort(arr, N, sizeof(int), compare);

    // auto res = find(arr,arr+N, Y);  
    
    // double res_y = N * (X/100);
    // //cout << N << X/100 << endl;

    // cout << res_y << " " << N-distance(arr, res);

    cout << N * (X/100) << " " << cnt ;
    //delete[] arr;
    return 0;
}