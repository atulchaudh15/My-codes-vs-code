#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(char ch: str){
        cout<<ch<<" ";
    }
}