#include<bits/stdc++.h>
using namespace std;
int main(){
    //storing graph in adjacency form 
    int n,m; //no. of node and edge
    cin>>n>>m;
    int adj[n+1][m+1];//matrix
    for(int i=0;i<m;i++){
        int u,v;//row and column
        adj[u][v]=1;
        adj[v][u]=1;

    }
}