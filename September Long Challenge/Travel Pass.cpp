#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    int N, A, B;
    string s;

    int time;

    for(int i = 0; i < T; i++){
        cin >> N >> A >> B;
        cin >> s;
        time = 0;

        for(int j = 0; j < N; j++){
            if(s[j] == '0'){
                time += A;
            }
            else{
                time += B;
            }
        }

        cout << time << endl;
    }

    return 0;
}
