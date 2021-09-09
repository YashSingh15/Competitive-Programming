#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;

    sort(s.begin(), s.end());

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(i == 0){
            count++;
            continue;
        }
        if(s[i] == s[i - 1]){
            continue;
        }
        else{
            count++;
        }

    }

    if(count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}
