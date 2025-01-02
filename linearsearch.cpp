#include <iostream>
using namespace std;

 int searchArray (int arr[],int size,int key){
        
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == key)
            {
                return 1;
            }
            else
            {
                return 0;
            }
            
        }

 }

int main (){
    cout << "Enter the element to search for" << endl;
    int arr[10] = {1,2,4,5,3,-2,-5,9,8,-7};
    int key;
    cin >> key;
    bool found = searchArray(arr , 10 , key);
    if (found)
    {
        cout << "Key is present"  << endl;
           
    }else
    {
    cout << "Key is absent"  << endl;
    }

}