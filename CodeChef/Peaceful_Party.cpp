#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>>b>>c;
        int d = a+c;
        if(d>=b){
            cout<<d<<endl;
        }else{
            cout<<b<<endl;
        }
    }
}