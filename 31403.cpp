#include "bits/stdc++.h"

using namespace std;

int main(){
    string a,b;
    int c;
    
    int res1, res2;

    cin >> a >> b >> c;
    
    res1 = stoi(a) + stoi(b) - c;
    res2 = stoi(a + b) - c ;
    cout << res1 << endl << res2;
    return 0;
}