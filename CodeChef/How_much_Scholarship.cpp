#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x<=50){
        cout << "100";
    }else if(x<=100){
        cout << "50";
    }else if(x>100){
        cout << "0";
    }
}