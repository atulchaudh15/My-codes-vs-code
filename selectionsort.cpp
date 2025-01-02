#include<iostream>
using namespace std;

int selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; i < n; j++)
        {
           if (arr[j]< arr[minIndex])
               minIndex = j;
        }
         swap(arr[minIndex],arr[i]);
    }
    
}
int main(){
    int n;
    int arr[5]={6,2,8,4,10};
    cout << "the sorted array is " << selectionSort(arr,5)<< endl;

}