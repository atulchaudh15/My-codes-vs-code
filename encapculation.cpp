#include<iostream>
using namespace std;

class Encap{
      int x;

public:
      void set(int n){
        x=n;
      }

      int get(){
        return x;
      }
};

int main(){

    Encap obj;
    obj.set(3);
    cout<<obj.get()<<endl;



}