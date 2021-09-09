#include <iostream>
using namespace std;

int main() {

    int matrix[5][5];

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            cin >> matrix[i][j];
        }
    }

    int row = 0;
    int column = 0;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            if(matrix[i][j] == 1){
                column = j + 1;
                break;
            }
        }

        if(matrix[i][column - 1] == 1){
            row = i + 1;
            break;
        }


    }

    int minDist = abs(column - 3) + abs(row - 3);
    cout << minDist;

    return 0;
}
