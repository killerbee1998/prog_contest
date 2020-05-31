#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("112a.txt", "r", stdin);
    int a1= 0;
    int a2 = 0;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0;i<s1.length();++i){
        a1 += toupper(s1[i]);
        a2 += toupper(s2[i]);
    }
    if(a1 < a2){
        cout << -1;
    }else if(a1>a2){
        cout << 1;
    }else if(a1==a2){
        cout << 0;
    }
}