    #include <bits/stdc++.h>
    #define int long long
    using namespace std;

    const int sz = 2e5 + 7;
    int a[sz], st[sz << 2];

    void build(int l, int r, int in){
        if(l == r){
            st[in] = a[l];
            return;
        }
        int mid = (l + r) >> 1;
        int left = in >> 1, right = in >> 1 | 1;
        build(l, mid, left);
        build(mid + 1, r, right);
        st[in] = st[left] + st[right];
    }


    main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n, x;    
        cin >> n >> x;
        vector<int> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        dp[0] = 1;
        for (int i = 1; i <= x; i++) {
            for (int j = 0; j < n; j++) {
                if (i - c[j] >= 0) {
                    dp[i] += dp[i - c[j]];
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[x] << endl;
        return 0;
    }
