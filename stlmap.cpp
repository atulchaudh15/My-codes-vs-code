#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
map<int,string> m;
m[1]="love";
m[4]="babbar";
m[7]="kumar";
m.insert({5,"bheem"});

for (auto i : m )
    { 
        cout << i.first <<" "<< i.second<< endl; 
    }
}