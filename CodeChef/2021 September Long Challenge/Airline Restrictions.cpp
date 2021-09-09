#include <bits/stdc++.h>
using namespace std;

string weightChecker(int a, int b, int c, int d, int e){
    if(a + b <= d && c <= e){
        return "YES";
    }
    else if(a + c <= d && b <= e){
        return "YES";
    }
    else if(b + c <= d && a <= e){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){

    int t;
    cin >> t;

    int a, b, c, d, e;

    for(int i = 0; i < t; i++){
        cin >> a >> b >> c >> d >> e;
        cout << weightChecker(a, b, c, d, e) << endl;
        }


    return 0;
}
