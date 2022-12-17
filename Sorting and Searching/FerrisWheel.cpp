#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> v(n);
    for(int &i : v) 
        cin >> i;
    sort(v.begin(), v.end());
    int cnt = 0;
    int i = 0, j = n-1;
    while(i <= j) {
        if(v[i] + v[j] <= p) {
            cnt++;
            j--;
            i++;
        } else {
            cnt++;
            j--;
        }
    }
    cout << cnt << endl;
}