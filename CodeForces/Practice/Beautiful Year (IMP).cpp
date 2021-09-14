// Important problem that uses the do while loop (rare) and shows how to check if a given string is distinct
// Not sure about the time complexity, since the nested loop's inner index depends on the outer index, it may not be O(n^2), but can't say it's
// O(n) for sure either.

#include <bits/stdc++.h>
using namespace std;

bool checkDistinct(int year){
    string s = to_string(year);

    int n = s.length();

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(s[j] == s[i]){
                return false;
            }
        }
    }

    return true;

}

int main() {

    int y;
    cin >> y;

    int i = y;

    int distinctYear = 0;

    do{
        i++;
        if(checkDistinct(i)){
            distinctYear = i;
            break;
        }
    }
    while(
            !checkDistinct(i)
            );

    cout << distinctYear;


    return 0;
}
