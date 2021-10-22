#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
#define rREP(i, a, b) for(int (i) = (a) - 1; (i) >= (b); (i)--)
#define PB push_back
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;

int N;

void deleteElement(int A[], int a) {
    int i;
    for(i = 0; i < N; i++) {
        if (A[i] == a)
            break;
    }

    if(i < N){
        N = N - 1;
        for(int j = i; j < N; j++){
            A[j] = A[j + 1];
        }
    }
}

int findEvenBack(int A[]){
    for(int i = N - 1; i >= 0; i--){
        if(A[i] % 2 == 0)
            return i;
    }
}

int findOddBack(int A[]){
    for(int i = N - 1; i >= 0; i--){
        if(A[i] % 2 != 0)
            return i;
    }
}

int findOddFront(int A[]){
    REP(i, 0, N){
        if(A[i] % 2 != 0)
            return i;
    }
}

int findEvenFront(int A[]){
    REP(i, 0, N){
        if(A[i] % 2 == 0)
            return i;
    }
}

int findNegativeBack(int A[]){
    for(int i = N - 1; i >= 0; i--){
        if(A[i] < 0)
            return i;
    }
}

int findPositiveBack(int A[]){
    for(int i = N - 1; i >= 0; i--){
        if(A[i] > 0)
            return i;
    }
}

int findPositiveFront(int A[]){
    REP(i, 0, N){
        if(A[i] > 0)
            return i;
    }
}

int findNegativeFront(int A[]){
    REP(i, 0, N){
        if(A[i] < 0)
            return i;
    }
}

bool negativePresent(int A[]){
    REP(i, 0, N){
        if(A[i] < 0)
            return true;
    }
    return false;
}

bool evenPresent(int A[]){
    REP(i, 0, N){
        if(A[i] % 2 == 0)
            return true;
    }
    return false;
}

void removeEven(int A[]){
    int o, e;
    while(evenPresent(A)){
        o = findOddFront(A);
        e = findEvenFront(A);

        A[max(o, e)] = A[o] + A[e];
        deleteElement(A, A[min(o, e)]);

        o = findOddBack(A);
        e = findEvenBack(A);

        A[min(o, e)] = A[o] + A[e];
        deleteElement(A, A[max(o, e)]);

    }
}

void removeNegative(int A[]){
    int p, n;
    while(negativePresent(A)){
        p = findOddFront(A);
        n = findEvenFront(A);

        A[max(p, n)] = A[p] + A[n];
        deleteElement(A, A[min(p, n)]);


        p = findOddBack(A);
        n = findEvenBack(A);

        A[min(p, n)] = A[p] + A[n];
        deleteElement(A, A[max(p, n)]);

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    int input[N];
    REP(i, 0, N) {
        cin >> input[i];
    }

    int A[N];

    A[0] = input[0];
    A[N - 1] = input[1];

    int i = 2;

    int s = 0;
    int e = N - 1;

    int m;

    queue<pair<int, int>> q;
    q.push({s, e});
    set<int> visited;

    visited.insert(0);
    visited.insert(N - 1);

    while (!q.empty()) {
        s = q.front().first;
        e = q.front().second;
        m = (s + e) / 2;
        if (visited.count(m)) {
            q.pop();
            continue;
        }
        visited.insert(m);
        A[m] = input[i];
        i++;
        q.push({s, m});
        q.push({m, e});
        q.pop();
    }

    removeEven(A);
    removeNegative(A);
    removeEven(A);

    vi final;

    int B[N];

    REP(i, 0, N){
        B[N - 1 - i] = A[i];
    }

    REP(i, 0, N){
        int flag = 0;
        REP(j, 0, i){
            if(B[j] == B[i]){
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;

        final.PB(B[i]);
    }

    reverse(final.begin(), final.end());

    REP(i, 0, final.size()){
        cout << final[i] << " ";
    }

    return 0;
}
