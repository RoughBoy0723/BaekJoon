#include "bits/stdc++.h"

using namespace std;

int main(){
    int cnt, max = 0 , res;
    int  a, d, g;
    cin >> cnt;
    for(int i = 0 ; i < cnt ; i++ ){
        cin >> a >> d >> g; 
        if(a == d + g){
            res = 2 * ( a * ( d  + g ));
        }else{
            res = a * ( d + g );
        }
        max = res >= max ? res : max ;
    }
    cout << max;

    return 0;
}