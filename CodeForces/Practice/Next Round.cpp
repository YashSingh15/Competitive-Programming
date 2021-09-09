#include <iostream>
using namespace std;

int main() {

    int n;
    int k;

    cin >> n >> k;

    int score[n];

    int passed = 0;

    for(int i = 0; i < n; ++i){
        cin >> score[i];
    }

    for(int i = 0; i < n; i++){
        if(score[i] >= score[k - 1]){
            if(score[i] > 0)
                passed++;
        }
    }

    cout << passed;

    return 0;
}
