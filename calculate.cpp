#include <iostream>

using namespace std;

int main(){

    int a,b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;

    char ch ;
    cout << "Enter the value of ch " << endl;
    cin >> ch;
     
     switch (ch)
     {
          case '+': cout << a+b  << endl; 
                break;
          case '-': cout << a-b  << endl; 
                break;
          case '*': cout << a*b  << endl; 
                break;
          case '/': cout << a/b  << endl; 
                break;
          case '%': cout << a%b  << endl; 
                break;
          default:cout << "Input is invalid" << endl;
                break;
     }

}