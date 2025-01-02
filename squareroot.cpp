#include<iostream>
using namespace std;

int sqrtRoot(long num){
     long ans=-1;
     long s=0;
     long e= num;
     long mid = s+ (e-s)/2;
     while (s<=e)
     {
       if ((mid*mid)>=num)
       {
         e = mid-1;
         ans= mid;
       }else {
        s = mid+1;
       }
       mid = s+ (e-s)/2;
     }
    return ans; 

}

int main(){
    long n;
    cout << "Enter the value of n"<< endl;
    cin >> n;
    int answer= sqrtRoot(n);
    cout << "The square root of the given number is "<< answer << endl;
}  