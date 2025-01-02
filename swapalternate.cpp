#include <iostream>
using namespace std;

void printArray(int arr[],int n){
       for (int i = 0; i < n; i++)
       {
         cout << arr[i] << " ";
       }
       cout << endl;
}

void swapAlternate(int arr[],int size){
       for (int i = 0; i < size; i+=2)
       {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
        
       }
}

int main(){
     int even[6]={1,3,5,7,8,4};
     int odd[5]={4,2,7,8,1};

     swapAlternate(even,6);
     printArray(even,6);

}
