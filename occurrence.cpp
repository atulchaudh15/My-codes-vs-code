#include<iostream>
using namespace std;

int fisrtOccur(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid = s+ (e-s)/2;
    int ans=0;
    while (s<=e)
    {
        if(arr[mid]== key ){
        ans = mid;
        e = mid-1;
        }else if (arr[mid] < key)
        {
            s = mid + 1;
        }else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s+ (e-s)/2;
        
        
    }
    return ans;
}

int lastOccur(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int mid = s+ (e-s)/2;
    int ans=0;
    while (s<=e)
    {
        if(arr[mid]== key ){
        ans = mid;
        s = mid + 1;
        }else if (arr[mid] < key)
        {
            s = mid + 1;
        }else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        mid = s+ (e-s)/2;
        
        
    }
    return ans;
}


int main(){
    int even[6] = {1,2,3,3,3,5};
    int n;
    pair< int,int >p;
    p.first = fisrtOccur(even,6,3);
    p.second = lastOccur(even,6,3);
    cout << p.first << endl;
    cout << p.second << endl;
    
}
    