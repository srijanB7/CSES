#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    long long sum1 = ((long long)n * (n+1))/2, sum2 = 0;
    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
        sum2 += arr[i];
    }
    cout << sum1 - sum2 << endl;
}