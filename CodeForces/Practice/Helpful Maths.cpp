#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    cin >> s;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for(char ch : s){
        if(ch == '1'){
            c1++;
            continue;
        }
        if(ch == '2'){
            c2++;
            continue;
        }
        if(ch == '3'){
            c3++;
            continue;
        }
    }

    for(int i = 0; i < c1; i++){
        if(i == c1 - 1 && c2 == 0 && c3 ==0){
            cout << "1";
        }
        else{
            cout << "1+";
        }
    }
    for(int j = 0; j < c2; j++){
        if(j == c2 - 1 && c3 == 0){
            cout << "2";
        }else{
            cout << "2+";
        }
    }
    for(int k = 0; k < c3; k++){
        if(k == c3 - 1){
            cout << "3";
        }
        else {
            cout << "3+";
        }
    }

    return 0;
}
