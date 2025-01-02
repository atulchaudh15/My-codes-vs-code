#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
     virtual void print(){ //make this function as virtual 
        cout<<"parent class"<<endl;
    }

    void show(){
        cout<<"parent class"<<endl;
    }
};

class Child: public Parent{
public:
     void print() override { //this function will override the function which is declared in parent class 
        cout<<"child class"<<endl;
     }

     void show(){
        cout<<"child class"<<endl;
     }
      
};

int main(){
     Parent *p;
     Child c;
     p=&c; //assingning  child object to parent object
     p->print();
     p->show();

}
