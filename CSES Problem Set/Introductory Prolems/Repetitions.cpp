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

    string s;
    cin >> s;

    int longest = 1;
    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            longest = max(longest, count);
        } else {
            count = 1;
        }
    }

    cout << longest;

    return 0;
}
