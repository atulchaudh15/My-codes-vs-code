#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    cout<<"Finding 5 -> " << binary_search(v.begin(),v.end(),5)<<endl;

    int a=1, b=3;
    cout << max(a,b)<<endl;
     cout << min(a,b)<<endl;
     swap(a,b);
     cout<<a<<endl;

     string name= "atul";
     reverse(name.begin(),name.end());
     cout<< name<< endl;
}