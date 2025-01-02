#include <bits/stdc++.h>
using namespace std;

int findNaturalNumber(int arr[], int n) {
    int NaturalSum = (n * (n + 1)) / 2; 
    int CalculatedSum = 0;
    for (int i = 0; i < n - 1; i++) {
        CalculatedSum += arr[i];
    }

    return NaturalSum - CalculatedSum;
}

int main() {
    int arr[] = {1,3,4,5,6,7,8};
    int n = 7;

    cout << "The missing number is: " << findNaturalNumber(arr,n) << endl;

    return 0;
}
