#include <iostream>
using namespace std;

int main() {

    int t;
    int n;
    string s;

    cin >> t;

    string finalStrings[t];

    for(int i = 0; i < t; i++){
        cin >> n;
        cin >> s;
        for(int j = 0; j < n; j++){
            if(s[j] == 'U'){
                // top row

                s[j] = 'D';
                finalStrings[i] = s;
            }
            else if(s[j] == 'D'){
                // bottom row

                s[j] = 'U';
                finalStrings[i] = s;
            }
            else{
                // either bottom or top row, string remains unchanged

                finalStrings[i] = s;
            }
        }

    }

    for(int i = 0; i < t; i++){
        cout << finalStrings[i] << endl;
    }
    return 0;
}
