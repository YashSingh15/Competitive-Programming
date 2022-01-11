#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
#define rREP(i, a, b) for(int (i) = (a) - 1; (i) >= (b); (i)--)
#define PB push_back
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;

bool isEven(int x) {
    if (x % 2 == 0)
        return true;

    return false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;

    cout << n << " ";

    while (n != 1) {
        if (isEven(n)) {
            n /= 2;
            cout << n << " ";
        } else {
            n = 3 * n + 1;
            cout << n << ' ';
        }
    }

    return 0;
}
