#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int upperCount = 0;
    int lowerCount = 0;

    for(char& ch : s){
        if(isupper(ch)){
            upperCount++;
        }
        else{
            lowerCount++;
        }
    }

    if(upperCount > lowerCount){
        for(char& ch : s){
            if(islower(ch)){
                ch = char(toupper(ch));
            }
        }
    }
    else{
        for(char& ch : s){
            if(isupper(ch)){
                ch = char(tolower(ch));
            }
        }
    }

    cout << s;

    return 0;
}
