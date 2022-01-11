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

// O(n) time, O(1) space

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    ll x;
    ll prev;

    cin >> x;

    ll count = 0;

    ll max_element = x;

    for (int i = 1; i < n; i++) {
        prev = x;
        cin >> x;

        if (x < prev || x < max_element) {
            count += max(prev - x, max_element - x);
            x += max(prev - x, max_element - x);
            max_element = x;
        }
    }

    cout << count;

    return 0;
}
