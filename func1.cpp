#include <iostream>
using namespace std;

int arithmeticPro( int n){

    int ans = (3 * n + 7);
    return ans;
}

int main (){
     int n;
     cin >> n;
      int ansOfP = arithmeticPro(n);
     cout << "answer is" << ansOfP << endl;
}
     