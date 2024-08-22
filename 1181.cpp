#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compareStrings(const string &a, const string &b){
    if(a.length() == b.length()){
        return a < b;
    }else{
        return a.length() < b.length();
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);
    for(int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    sort(strings.begin(), strings.end(), compareStrings);
    auto last = unique(strings.begin(), strings.end());
    strings.erase(last, strings.end());

    for(const auto &str : strings) {
        cout << str << endl;
    }

    return 0;
}
