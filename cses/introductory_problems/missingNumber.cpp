#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int t;
    long long sum;
    long long sum2 = n*(n+1)/2;
    for (int i=0; i<n-1; i++) {
        cin >> t;
        sum += t;
    }
    cout << sum2 - sum << "\n";

    return 0;
}
