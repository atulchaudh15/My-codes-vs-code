#include<bits/stdc++.h>
using namespace std;

class Parent1{
public:
     Parent1(){
        cout<<"Parent 1 class"<<endl;
     }
};

class Parent2{
public:
     Parent2(){
        cout<<"Parent 2 class"<<endl;
     }
};

class Child: public Parent1, public Parent2{ //single inheritance (comma k baad ek aur inherit kri h to this is the example of multiple inheritance)
public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

class GrandChild: public Child{ // multi-level inheritance 
public:
    GrandChild(){
        cout<<"Grandchild class"<<endl;
    }
};

int main(){
      Child c;
      



}