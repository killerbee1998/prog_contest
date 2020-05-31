#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("1a.txt", "r", stdin);
    long double a,b,c = 0;
    cin >> a >> b >> c;
    long long int ans = (ceil(a/c) * ceil(b/c));
    cout << ans << "\n";
}