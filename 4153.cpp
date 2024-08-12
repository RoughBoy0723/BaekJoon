#include "bits/stdc++.h"

using namespace std;

int main(){
    long int num[3];

    while(1){
        cin >> num[0] >> num[1] >> num[2];

        if(num[0] == 0){
            break;
        }

        sort(begin(num), end(num));

        if(pow(num[2],2) == pow(num[1],2) + pow(num[0],2)){
            cout << "right" << endl;
        }else{ 
            cout << "wrong" << endl;
        }
    }
    return 0;
}
