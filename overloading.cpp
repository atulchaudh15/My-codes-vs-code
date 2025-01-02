#include<bits/stdc++.h>
using namespace std;

class Sum{  //function overloading 
public:
    void add(int x,int y){
        int sum= x+y;
        cout<<sum<<endl;
    }

    void add(int x,int y,int z){
        int sum= x+y+z;
        cout<<sum<<endl;
    }

    void add(float x,float y){
        float sum= x+y;
        cout<<sum<<endl;
    }

};

int main(){
    
    Sum s;  // object of class type sum;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.4),float(5.6));
}