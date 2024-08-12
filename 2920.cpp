#include "bits/stdc++.h"

using namespace std;

int main(){
    char ch;
    string num;
    string ascending = "12345678";
    string descending = "87654321";
    string str[3] = {"ascending", "descending", "mixed"};
    string res;

    for(int i = 0; i < 8 ; i++){
        cin >> ch;
        num += ch;
    }

    if(num == ascending){
        res = str[0];
    }else if(num == descending){
        res = str[1];
    }else{
        res = str[2];
    }

    cout << res;
    return 0;
}