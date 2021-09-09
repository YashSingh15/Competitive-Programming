#include <bits/stdc++.h>
using namespace std;

void sortArray(int );

int main(){

    int n;

    string s;

    cin >> n;
    cin >> s;

    int remove = 0;

    for(int i = 1; i <= n; i++){
        if(s[i] == s[i - 1]){
            remove++;
        }
    }

    cout << remove;

    return 0;
}
