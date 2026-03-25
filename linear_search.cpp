#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 7, 1, 8, 3};
    int n = 5, target = 8;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
