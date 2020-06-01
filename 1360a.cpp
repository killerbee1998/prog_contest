#include <bits/stdc++.h>
using namespace std;

int main(){
    // freopen("1360a.txt", "r", stdin);
    int n = 0;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        double x,y;
        if(a<b){
            x = a+a;
            y = b;
        }else{
            x= b+b;
            y = a;
        }

        if(x < y){
            x += (y-x);
        }

        cout << x*x << "\n";
    }
}