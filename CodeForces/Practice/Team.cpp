#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    bool confidence[n][3];
    int sum = 0;
    int problemsSolved = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> confidence[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            sum += confidence[i][j];
        }
        if(sum >= 2){
            problemsSolved++;
        }
        sum = 0;
    }

    cout << problemsSolved;

    return 0;
}
