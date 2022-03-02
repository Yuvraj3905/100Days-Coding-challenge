#include <bits/stdc++.h>
using namespace std;

int print(int**edges,int n,int sv){          //sv=starting vertex
       
}

int main(){

    int n,e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] =new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] =0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s;  //f=first vertex s=second vertex
        cin >> f >> s;
        edges[f][s]=1;
        edges[s][f]=1;
        }
        print(edges,n,0);
}