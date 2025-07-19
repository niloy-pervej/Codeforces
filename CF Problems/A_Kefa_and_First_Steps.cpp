#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> v(n);
    int count = 1;
    v[0] = 1;

    for(int i = 1; i < n; i++) {
        if(a[i] >= a[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        v[i] = count;
    }

    sort(v.begin(), v.end());
    cout << v[n - 1] << endl;
    return 0;
}