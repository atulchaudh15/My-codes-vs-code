#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;//number of node and edge
    cin>>n>>m;
    vector<int>adj[n+1];//creating a list of adjacent(list here refers to vector )
    for (int i = 0; i < m; i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);//vector pushing 
       adj[v].push_back(u);
    }
    
}