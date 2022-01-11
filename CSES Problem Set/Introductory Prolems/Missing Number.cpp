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
 
    ll x;
    ll sum = 0;
 
    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }
 
    cout << (n * (n + 1) / 2) - sum;
 
    return 0;
}
