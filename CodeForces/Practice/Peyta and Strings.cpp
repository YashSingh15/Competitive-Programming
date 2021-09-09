#include <iostream>
using namespace std;
#include <cctype>

int main() {

    string s1, s2;

    cin >> s1 >> s2;

    for(int i = 0; i < s1.length(); i++){
        char ch1 = tolower(s1[i]);
        char ch2 = tolower(s2[i]);

        if(ch1 > ch2){
            cout << 1;
            break;
        }
        else if(ch1 < ch2){
            cout << -1;
            break;
        }
        if(i == s1.length() - 1){
            cout << 0;
            break;
        }

    }




    return 0;

}
