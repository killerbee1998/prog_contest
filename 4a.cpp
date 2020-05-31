#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0;
    cin >> a;
    string ans = ( (a%2==0) && (a > 2) ) ? "YES" : "NO";
    cout << ans;
}