#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x>>y;
        int z=x+y;
        if(z%2==0){
            cout << "Janmansh"<<endl;
        }else{
            cout << "Jay"<<endl;
        }
    }
}