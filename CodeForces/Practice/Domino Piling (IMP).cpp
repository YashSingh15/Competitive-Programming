#include <iostream>
using namespace std;

int main() {

    int M, N;

    cin >> M >> N;

    cout << M*N/2;

    int dominoes;

    if(M*N == 1){
        dominoes = 0;
    }

    if(M*N == 2){
        dominoes = 1;
    }

    if(M*N >= 2){
        if(M%2 != 0){
            if(N%2 != 0){
                dominoes = M*(N - 1)/2 + (M-1)/2;
            }
            else{
                dominoes = M*N/2;
            }
        }
        else{
            if(N%2 != 0){
                dominoes = N*M/2;
            }
            else{
                dominoes = M*N/2;
            }
        }
    }



    return 0;
}
