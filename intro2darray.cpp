#include<iostream>
using namespace std;

int largestSum(int arr[][3],int row,int col){
    int maxi= INT32_MIN;
     int rowIndex=-1;
    for (row  = 0; row < 3; row++)
    {
        int sum=0;
        for (col = 0; col < 3; col++)
        {
            sum+=arr[row][col];
        }
       if (sum>maxi)
       {
         maxi=sum;
         rowIndex = row;
       }
       
    }
    cout<<"maximum sum is "<< maxi<< endl;
    return rowIndex;
}






int main(){
    int arr[3][3];
    //taking input in 2d array
    for (int row = 0; row < 3; row++)
    {
       for (int col = 0; col < 3; col++)
       {
        cin>> arr[row][col];
       }
       
    }
    cout<<"max row is at index "<<largestSum(arr,3,3);
    
    
}