#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;

    int x;

    cin >> n >> k;
    int counter = 0;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x%k == 0){
            counter++;
        }
    }
    cout << counter;

    return 0;
}

