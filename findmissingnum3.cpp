#include <bits/stdc++.h>
using namespace std;

int findNaturalNumber(int arr[], int n) {
    int xorElement = 0, xorNatural = 0;
    for (int i = 0; i < n - 1; i++) {
        xorElement ^= arr[i];
    }

    for (int i = 1; i <= n; i++) {
        xorNatural ^= i;
    }
    return xorElement ^ xorNatural;
}

int main() {
    int arr[] = {1,2,3,5,6,7,8};
    int n = 7;

    cout << "The missing number is: " << findNaturalNumber(arr,n) << endl;

    return 0;
}
