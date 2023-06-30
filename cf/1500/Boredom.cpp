#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxN = 1e5+20;
const int maxA = 1e5+20;
ll s[maxA];
vector<ll> vec;
ll dp[maxN];

int32_t main() {
    int n, tmp; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (s[tmp] == 0) vec.push_back(tmp);
        s[tmp] += tmp;
    }
    sort(vec.begin(), vec.end());

    dp[0] = s[vec[0]];

    for (int i = 1; i < vec.size(); i++) {
        if (abs(vec[i]-vec[i-1]) == 1) dp[i] = max(dp[i-1], dp[i-2]==-1?0:dp[i-2] + s[vec[i]]);
        else dp[i] = dp[i-1] + s[vec[i]];
    }
    /*
    for (int i = 0; i < vec.size(); i++) {
        cout << dp[i] << ", ";
    }cout << endl;
    */

    cout << dp[vec.size()-1] << '\n';

    return 0;
}
