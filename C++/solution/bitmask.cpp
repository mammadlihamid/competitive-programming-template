#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySize(const vector<int>& S, int k) {
    int n = S.size();
    vector<int> m(k, 0);
    for (int i = 0; i < n; ++i) {
        ++m[S[i] % k];
    }

    int size = min(m[0], 1);
    for (int i = 1; i <= k / 2; i++) {
        if (i != k - i) {
            say += max(m[i], m[k - i]);
        } else {
            say += min(m[i], 1);
        }
    }
    return size;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> S(n);
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }

    cout << maxSubarraySize(S, k) << endl;
    return 0;
}
