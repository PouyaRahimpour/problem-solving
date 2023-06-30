#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e3+10;
int a[maxn];

int main() {
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int p1 = 0, p2 = n-1;
    int sum1 = 0, sum2 = 0;
    int x = 0;
    while (p1 <= p2) {
        if (x%2 == 0) {
            if (a[p1] > a[p2]) sum1 += a[p1++];
            else sum1 += a[p2--];
        }
        else {
            if (a[p1] > a[p2]) sum2 += a[p1++];
            else sum2 += a[p2--];
        }
        x++;
    }
    cout << sum1 << " " << sum2 << '\n';



    return 0;
}
