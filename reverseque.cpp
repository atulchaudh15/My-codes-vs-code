#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(8);
    q.push(9);
    q.push(10);
    auto n=5;
    for (auto it : q)
    {
        cout<<it<<endl;  
    }
    return 0;

}