#include<bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
const int maxn = 2e5+10;
int a[maxn];

int main() {
    int tt; cin >> tt;
    while (tt--) {
        int n; cin >> n;
        int ind2 = -1, ind1 = -1, indn=-1;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if (a[i]==2) ind2= i;
            if (a[i]==n) indn = i;
            if (a[i]==1) ind1 = i;
        }

        ind1++; ind2++; indn++;

        if ((ind1<=indn && indn<=ind2) || (ind2<=indn && indn<=ind1)) {
            cout << indn << " " << indn << "\n";
        } else {
            if (ind1 < ind2 && ind2 < indn) {
                cout << indn << " " << ind2 << "\n";

            } else if (ind2 < ind1 && ind1 < indn) {
                cout << indn << " " << ind1 << "\n";
            }
            else if (indn < ind1 && ind1 < ind2) {
                cout << indn << " " << ind1 << "\n";
            }
            else if (indn < ind2 && ind2 < ind1) {
                cout << indn << " " << ind2 << "\n";
            }

        }









    }

    return 0;
}

