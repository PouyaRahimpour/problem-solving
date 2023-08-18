#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    string line;
    int x; cin >> x;
    while (x) {
        vector<int> v(n);
        v[0] = x;
        for (int i=1; i<n; i++) {
            cin >> v[i];
        }

        // 1 2 6 7 5 4 3
        stack<int> ds;
        int j=n;
        for (int i=n-1; i>=0; i--) {
            if (v[i]!=j) {
                if (!ds.empty() && ds.top()==j) {
                    //cout << "pop " << ds.top() << endl;
                    ds.pop();
                    j--;
                    i++;
                } else {
                    //cout << "push " << v[i] << endl;
                    ds.push(v[i]);
                }
            } else {
                //cout << "have " << v[i] << endl;
                j--;
            }
            //cout << j << endl;
        }
        while (!ds.empty() && ds.top()==j) {
            ds.pop();
            j--;
        }



        cout << (j==0?"Yes":"No") << endl;





        cin >> x;
    }
    cout << endl;


}
int main() {
    int n; cin >> n;
    while (n) {
        solve(n);
        cin >> n;
    }
    return 0;
}
