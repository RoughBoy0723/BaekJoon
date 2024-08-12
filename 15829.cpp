#include "bits/stdc++.h"

using namespace std;

int main(){
    unsigned long long int N;
    unsigned long long int hash = 0;
    cin >> N;
    char *num = new char[N];
    cin >> num;
    unsigned long long int r = 1;
    const unsigned long long int M = 1234567891;


    for(int i = 0 ; i < N ; i++){
        hash = (hash + (num[i] - 'a' + 1) * r)%M;
        r = (r*31)%M;
    }
    cout << hash;
    delete[] num;
    return 0;
}
