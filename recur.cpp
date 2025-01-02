#include<bits/stdc++.h>
using namespace std;
void print(auto i,auto n){
    if(i>n) return;
    print(i+1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    print(1,n);

}