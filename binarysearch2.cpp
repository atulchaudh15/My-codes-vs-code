#include <bits/stdc++.h>
using namespace std;

void zerosAndOnesAndTwos(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        if (arr[left] == 0) {
            left++;
        }
        else if (arr[right] == 2) {
            right--;
        }
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {1,0,2,0,1,0,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    zerosAndOnesAndTwos(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
