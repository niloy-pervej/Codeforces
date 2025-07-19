#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        int count0 = 0, count1 = 0;
        
        for (int j = 0; j < n; j++) {
            if (s[j] == '0') 
                count0++;
            else 
                count1++;
        }
       cout<<count0<<count1<<"a";

        if (abs(count0 - count1) / 2 == k||k==(((count0+1)/2)+((count1+1)/2)))
            cout << "YES\n";
        else  
            cout << "NO\n";
           // cout<<abs(count0-count1);
    }

    
    return 0;
}