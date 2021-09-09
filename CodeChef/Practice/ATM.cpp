#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    float y;

    cin >> x >> y;

    if(x % 5 == 0 && (float)x + 0.5 <= y){
        printf("%0.2f", y - (float)x - 0.5);
    }else{
        printf("%0.2f", y);
    }

}

