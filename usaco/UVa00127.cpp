#include<bits/stdc++.h>
using namespace std;

bool match(string s1, string s2) {
    return (s1[0]==s2[0] || s1[1]== s2[1]);
}

void solve(string first) {

    vector<stack<string>> st(52, stack<string>());
    st[0].push(first);
    string s;
    for (int i=1; i<52; i++) {
        cin >> s;
        st[i].push(s);
    }

    int moves = 1;
    while (moves>0) {
        moves = 0;
        for (int i=0; moves==0&&!st[i].empty(); i++) {
            string tmp = st[i].top();
            if (i-3>=0 && match(st[i].top(), st[i-3].top())) {
                st[i].pop();
                st[i-3].push(tmp);
                moves++;
            } else if (i-1>=0 && match(st[i].top(), st[i-1].top())) {
                st[i].pop();
                st[i-1].push(tmp);
                moves++;
            }
            if (st[i].empty()) {
                /*
                int j= i+1;
                while (!st[j].empty()) {
                    st[j-1] = st[j];
                    j++;
                }
                st[j-1] = st[j];
                i--;
                */
                st.erase(st.begin()+i);
            }
        }
    }
    int cnt = 0;
    for (int i=0; i<52; i++) if (!st[i].empty()) cnt++;
    cout << cnt << " pile" << (cnt==1?" ":"s ") << "remaining:";
    for (int i=0; i<52; i++) {
        if (st[i].empty()) break;
        else cout << " " << st[i].size();
    } cout << endl;
    /*
    */



}
int main() {
    string first;
    cin >> first;
    while (first!="#") {
        solve(first);
        cin >> first;
    }
    return 0;
}
