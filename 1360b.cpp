#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("1360b.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int ans = __INT_MAX__;
        for(int i=0;i<n-1;++i){
            if(abs(a[i]-a[i+1]) < ans){
                ans = abs(a[i]-a[i+1]);
            }
        }
        cout << ans << "\n";
    }
}