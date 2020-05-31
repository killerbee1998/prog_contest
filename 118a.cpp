#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("118a.txt", "r", stdin);
    string s, ans = "";
    cin >> s;
    char x[] = {'Y','y','A','a','E','e','I','i','O','o','U','u'};
    for(int i=0;i<s.size();++i){
        bool v = false;
        for(int j=0;j<12;++j){
            if(s[i] == x[j]){
                v = true;
                break;
            }
        }

        if(!v){
            ans.push_back('.');
            ans.push_back(tolower(s[i]));
        }
    }

    cout << ans;
}