#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int maxN = 2e5 + 20;
const int maxH = 2e5 + 20;
int h[maxN];
int slc[maxH];

int32_t main() {
    int n, k; cin >> n >> k;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        for (int j=0; j<h[i]; j++) slc[j]++; 
    }
    
    for (int i=1; i<maxH; i++) slc[i] += slc[i-1];
    int cnt = 1;
    
    while (
    return 0;
}
