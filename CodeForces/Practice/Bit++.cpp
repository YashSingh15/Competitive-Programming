#include <iostream>
using namespace std;

int main() {

    int n;
    int x = 0;

    cin >> n;

    string operations[n];

    for(int i=0;i<n;++i){
        cin >> operations[i];
    }

    for(int i = 0; i < n; ++i){
        if(operations[i] == "++X" || operations[i] == "X++"){
            x++;
        }
        if(operations[i] == "--X" || operations[i] == "X--"){
            x--;
        }
    }

    cout << x;

    return 0;
}
