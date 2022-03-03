#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i;
        cin>>i;
        // while(i>0){
            if(i>65){
                cout<<"OVERLOAD"<<endl;
            }
            else if(i<35){
                cout<<"UNDERLOAD"<<endl;
            }else{
                cout<<"NORMAl"<<endl;
            }
        // }
    }
}