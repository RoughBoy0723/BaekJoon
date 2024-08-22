#include "bits/stdc++.h"

using namespace std;

int main(){
    int n, num;
    char tmp[10];
    string input;

    cin >> n; 

    int arr[20];

    for(int i = 0; i < n; i++){
        scanf("%s %d", tmp, &num);
        input = string(tmp);
        if(input == "add"){
            arr[num] = 1;
        }

        else if(input == "remove"){
            arr[num] = 0;
        }

        else if(input == "check"){
            if(arr[num]) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }

        else if(input == "toggle"){
            if(arr[num]){
                arr[num] = 0;
            } else {
                arr[num] = 1;
            }
        }

        else if(input == "all"){
            for(int j = 1; j <= 20; j++){
                arr[num] = 1;
            }
        }

        else if(input == "empty"){
            for(int j = 1; j <= 20; j++){
                arr[num] = 0;
            }
        }
    }
    return 0;
}
