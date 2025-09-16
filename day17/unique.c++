#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i];  // XOR cancels duplicates
    }

    cout << "Unique element: " << unique << endl;
    return 0;
}
