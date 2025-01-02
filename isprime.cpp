#include<iostream>
using namespace std;

int is_Prime(int num){
    if(num<=1){
        return 0;
    }
    for(int i= 2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
   int num=5;
   while (num<=50)
   {
    if (is_Prime(num))
    {
       cout << num <<endl;
    }
    num++; 
   }
   
} 
