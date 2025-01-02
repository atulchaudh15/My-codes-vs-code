#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count=1;
    cin>>n;
    for(int i=0;i<=n;i++){
        //printing spaces
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<i;j++){
            cout << count<<" ";
            count++;
        }
        cout<<endl;
    }
}
