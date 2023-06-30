#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int MOD = 998244353;
const int maxn = 1e7+10;
ll a[maxn], b[maxn];
ll choice[maxn];
ll powers[maxn];

ll power(int x, int y) {
    if (x==0) return 0;
    if (x==1 || y==0) return 1;
    ll tmp = power(x, y/2);
    if (y%2==0) return (tmp*tmp)%MOD;
    else return (((tmp*tmp)%MOD)*x)%MOD;

}
int main() {
    int n, a1, x, y, m, k;
    cin >> n >> a1 >> x >> y >> m >> k;
    a[1] = a1;
    for (int i=2; i<=n; i++) a[i] = ((a[i-1]*x)%m + y)%m;



    choice[k] = 1;
    for (int i=k+1; i<=n; i++) choice[i] = (((choice[i-1]*i)%MOD)*power(i-k, MOD-2))%MOD;
    //for (int i=0; i<=n; i++) cout << choice[i] << " \n"[i==n];

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            b[i] = (b[i] + choice[i-j+1]*a[j])%MOD;
        }
    }

    /*
    for (int i=1; i<=n; i++)
        cout << b[i] << " \n"[i==n];
        */


    ll ans = b[1];
    for (int i=2; i<=n; i++) ans = ans^(b[i]*i);
    cout << ans << "\n";




    return 0;
}

