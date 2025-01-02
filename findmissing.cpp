#include <bits/stdc++.h>
using namespace std;

int findNumber(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        while (arr[i] != i + 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]) {
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    return n;
}

int main() {
    int arr[] = {1,2,4,5,6};
    int n = 6;

    cout << "The missing number is: " << findNumber(arr, n) << endl;

    return 0;
}
