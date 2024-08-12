#include "bits/stdc++.h"

using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    double M = (B-A)/(double)400;    
    double res = 1 /(1 + pow(10,M)); 

    cout << res << endl;
    return 0;
}