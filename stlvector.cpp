#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);
    v.push_back(8);
    v.push_back(3);
    for (int i = 0; i < v.size(); i++)
    {
       cout<< v[i]<< " ";
    } 
    v[4]=4;

    cout << endl;
    for (auto i : v)
    {
       cout<<i<<" ";
    }

   cout << endl;
    cout<< "size of v :" <<v.size()<< endl;
    v.pop_back();
    
    cout<< "size of v :" <<v.size()<< endl;
    v.insert(v.begin()+1,4);
    for (int i = 0; i < v.size(); i++)
    {
       cout<< v[i]<<" ";
      
    } cout<<endl;
    vector<int> ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(135);
    // sort in increasing order
    sort(ans.begin(),ans.end());
    for(auto i: ans){
      cout<< i <<" ";
    } cout << endl;
    // sort in desceding order
    sort(ans.begin(),ans.end(), greater<int>());
   for(auto i: ans){
      cout<< i <<" ";
    }cout << endl;
    cout << binary_search(ans.begin(),ans.end(),55);
 
}