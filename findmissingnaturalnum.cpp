#include <bits/stdc++.h>
using namespace std;

int findNumber(int arr[], int n) {
    sort(arr, arr + n - 1);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return n;
}

int main() {
    int arr[] = {1,2,3,4,5,6,8,9};
    int n = 9; 

    cout << "The missing number is: " << findNumber(arr,n) << endl;

    return 0;
}
