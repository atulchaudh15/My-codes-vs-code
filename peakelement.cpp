#include <iostream>
using namespace std;

int peakElement(int arr[],int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if (arr[mid] < arr[mid+1])
        {
           s= mid+1;
        }else{
            e= mid;
        }
       mid = s + (e-s)/2; 
    }
    

}


int main(){
     int odd[5] = {1,3,4,5,2};
     int element = peakElement(odd,5);
     cout << "Peak element of an array is " << element << endl;
}