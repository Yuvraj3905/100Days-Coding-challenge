#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n,w,l;
        cin >> n>>w;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int sum = 0;
        int count=0;
        sort(a,a+ n);
        for(int i=n;i>0;--i){
             l=sum + a[i];
             sum=l;
             count++;
            cout<<l<<endl;
        }
        
        if(sum>=w){
                 cout<<count<<endl;
                 break;
             }else{
                 continue;
             }
    }
}