#include <bits/stdc++.h>
using namespace std;

int main() {
    int matr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;
    int key = 8;

    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matr[i][j] == key) {
                cout << "yes" << endl;
                found = true;
                break; // Exit the inner loop
            }
        }
    }

    if (!found) {
        cout << "no" << endl; // Print "no" only if the key is not found
    }

}
