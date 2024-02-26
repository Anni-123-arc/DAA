#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    int maxElement = arr[0];
    int minElement = arr[0];
    
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}
