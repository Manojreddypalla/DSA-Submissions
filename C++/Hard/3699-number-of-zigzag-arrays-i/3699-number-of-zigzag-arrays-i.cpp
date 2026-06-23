class Solution {
public:
    static constexpr int MOD = 1'000'000'007;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> up(m + 1), down(m + 1);

        for (int v = 1; v <= m; v++) {
            up[v] = v - 1;
            down[v] = m - v;
        }

        for (int len = 3; len <= n; len++) {
            vector<int> prefUp(m + 1), prefDown(m + 1);

            for (int i = 1; i <= m; i++) {
                prefUp[i] = (prefUp[i - 1] + up[i]) % MOD;
                prefDown[i] = (prefDown[i - 1] + down[i]) % MOD;
            }

            vector<int> newUp(m + 1), newDown(m + 1);

            for (int v = 1; v <= m; v++) {
                newUp[v] = prefDown[v - 1];

                newDown[v] = prefUp[m];
                newDown[v] -= prefUp[v];
                if (newDown[v] < 0) newDown[v] += MOD;
            }

            up.swap(newUp);
            down.swap(newDown);
        }

        long long ans = 0;
        for (int v = 1; v <= m; v++) {
            ans += up[v];
            ans += down[v];
        }

        return ans % MOD;
    }
};