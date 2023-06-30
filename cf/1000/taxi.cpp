#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 1e5 + 20;
int a[maxN];

int32_t main() {
    int n; cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    int ones=0, twoes=0, threes=0, fours=0;
    for (int i=0; i<n; i++)
        switch(a[i]) {
            case 1: ones++; break;
            case 2: twoes++; break;
            case 3: threes++; break;
            case 4: fours++; break;
        }
    int cars = fours;

    int t = twoes/2;
    twoes -= 2*t;
    cars += t;

    if (threes < ones) {
        cars += threes;
        ones -= threes;
        threes = 0;
        cars += ones/4;
        ones -= 4*(ones/4);
        //1: 0 1 2 3
        //2: 0 1

        if (ones == 3) {cars++;ones-=3;}
        cars++;
        if (ones == 0 && twoes == 0) cars--;
        
    } else {
        cars += ones;
        threes -= ones;
        ones = 0;

        cars += threes + twoes;
    }

    cout << cars << '\n';

    
    return 0;
}
