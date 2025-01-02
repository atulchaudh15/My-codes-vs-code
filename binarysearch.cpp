#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]== key)
        {
            return mid;
        }else if (arr[mid]< key)
        {
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start+(end-start)/2;

    }
    
    return -1;
}


int main(){
    int even[6] = {1,2,3,6,7,10};
    int odd[5] = {2,4,6,7,9};

    int EvenIndex = binarySearch(even,6,6);
    cout <<"Value of Index is " << EvenIndex << endl;
    int OddIndex = binarySearch(odd,5,9);
    cout <<"Value of Index is " << OddIndex << endl;
    
}