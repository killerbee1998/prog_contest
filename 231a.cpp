#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("231a.txt", "r", stdin);
    int n, ans = 0;
    cin >> n;
    while(n--){
        bool a,b,c = 0;
        cin >> a >> b >> c;
        if((a&b) || (a&c) || (b&c)){
            ans++;
        }
    }
    cout << ans;
}