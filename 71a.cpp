#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("71a.txt", "r", stdin);
    int n = 0;
    cin >> n;
    while(n--){
        string s, ans = "";
        cin >> s;
        if(s.size() > 10){
            ans = s[0] + to_string((s.substr(1,s.size()-2)).size()) + s[s.size()-1]; 
        }else{
            ans = s;
        }
        cout << ans<< "\n";
    }

}