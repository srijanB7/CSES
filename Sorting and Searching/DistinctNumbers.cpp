#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    int ans = 1, cnt = 1;
    for(int i = 0; i < n-1; i++) {
        if(v[i] == v[i+1]) {
            cnt++;
        } else {
            cnt = 1;
            ans++;
        }
    }
    cout << ans << endl;
}