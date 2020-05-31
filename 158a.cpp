#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("158a.txt", "r", stdin);
    int n, k , xx, ans= 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin >> a[i];
        if(i==(k-1)){
            xx = a[i];
        }
    }
    for(int i=0;i<n;++i){
        if(a[i] >=xx && a[i] > 0){
            ans++;
        }
    }
    cout << ans;
 
}