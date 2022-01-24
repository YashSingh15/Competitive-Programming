int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string A, B;

        cin >> A >> B;

        A.insert(0, "#");
        B.insert(0, "#");

        vi countA(N + 1);
        vi countB(N + 1);

        for (int i = 1; i <= N; i++) {
            countA[i] = countA[i - 1] + (A[i] == '1');
            countB[i] = countB[i - 1] + (B[i] == '1');
        }

        vector<vector<int>> dp(N + 1, vector<int>(N + 1, INT_MAX));

        dp[0][0] = 0;

        for (int i = 1; i <= N; i++) {
            dp[i][0] = dp[i - 1][0] + (A[i] == '0' ? countA[i - 1] : 0);
        }

        for (int j = 1; j <= N; j++) {
            dp[0][j] = dp[0][j - 1] + (B[j] == '0' ? countB[j - 1] : 0);
        }

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (A[i] == '1') dp[i][j] = dp[i - 1][j];
                if (A[i] == '0') dp[i][j] = dp[i - 1][j] + countA[i - 1] + countB[j];
                if (B[j] == '1') dp[i][j] = min(dp[i][j], dp[i][j - 1]);
                if (B[j] == '0') dp[i][j] = min(dp[i][j], dp[i][j - 1] + countA[i] + countB[j - 1]);
            }
        }
        cout << dp[N][N] << "\n";
    }
    
    return 0;
}

// Problem link: https://www.codechef.com/START22B/problems/MERGEBS
