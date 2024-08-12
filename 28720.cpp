#include "bits/stdc++.h"

using namespace std;

int main(){
    string str[3];
    cin >> str[0] >> str[1] >> str[2];
    long int res = 0;
    bool cnt = false;
    for(int i = 0 ; i < 3 ; i++){
        bool cnt = false;
        for(char ch : str[i]){
           if(isdigit(ch)){
                cnt = true;
                break;
           }
        }
        if(cnt == 1){
            res = (stoi(str[i])) + 3 - i;
            break;
        }
    }
    
    if(res % 15 == 0){
        cout << "FizzBuzz";
    }else if(res % 3 == 0){
        cout << "Fizz";
    }else if(res % 5 == 0){
        cout << "Buzz";
    }else{
        cout << res;
    }

    return 0;
}