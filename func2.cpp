#include <iostream>
using namespace std;

int Fibonacci( int n){
     int a;
     int b;
     int sum =0;
     sum = a+b;
     a=b;
     b=sum;
     return sum;
  
}

int main (){
     int n;
     cin >> n;
     int ansFib =Fibonacci(n);
     cout << ansFib << endl;


}

