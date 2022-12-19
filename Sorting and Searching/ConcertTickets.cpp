#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> h(n+1, -1), t(m+1, -1);
    multiset<int> st; 
    for(int i = 1; i <= n; i++) {
        cin >> h[i];
        st.insert(h[i]);
    }
    for(int i = 1; i <= m; i++) cin >> t[i];
    
    for(int j = 1; j <= m; j++) {
        auto it = st.lower_bound(t[j]);
        if(*it == t[j] and it != st.end()) {
            cout << *it << endl;
            st.erase(it);
        } else {
            if(it == st.begin()) {
                cout << -1 << endl;
                continue;
            }
            it--;
            if(*it > t[j]) {
                cout << -1 << endl;
            } else {
                cout << *it << endl;
                st.erase(it);
            }
        }
        
       
    }
}