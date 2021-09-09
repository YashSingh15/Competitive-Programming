#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    string wordList[n];

    for(int i = 0; i < n; i++){
        cin >> wordList[i];
    }

    string myStr;

    for(int i = 0; i < n; i++){

        myStr = wordList[i];

        if(myStr.length() > 10){
            myStr = myStr[0] + to_string(myStr.length() - 2) + myStr[myStr.length() - 1];
        }

        wordList[i] = myStr;

    }

    for(int i = 0; i < n; i++){
        cout << wordList[i] << endl;

    }

    return 0;
}
