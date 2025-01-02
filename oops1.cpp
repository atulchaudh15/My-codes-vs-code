#include<bits/stdc++.h>
using namespace std;

class Fruit{
public:
        string name;
        string color;

};
class Rectangle{
public:
        int len;
        int br;
        
        Rectangle(){ //default constructor or non-parameterised constructor
            len=0;
            br=0;
        }

        
        Rectangle(int x,int y){ //parameterised constructor
            len=x;
            br=y;
        }

        Rectangle(Rectangle& r){ //copy constructor
            len=r.len;
            br=r.br;
        }

        ~Rectangle(){ //destructor 
               cout<<"destructor is called"<<endl;
        }

};

int main(){
    Fruit apple; //object of type class FRUIT;
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<"-"<<apple.color<<endl;

    Fruit *mango = new Fruit(); // method 2 of declaring an object using new keyword;
    mango->name= "Mango";
    mango->color= "Yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;

    Rectangle *r1= new Rectangle();
    cout<<r1->len<<"-"<<r1->br<<endl;
    delete r1;

    Rectangle r2(3,4);
    cout<<r2.len<<"-"<<r2.br<<endl;
 
    Rectangle r3= r2;
    cout<<r3.len<<"-"<<r3.br<<endl;


}