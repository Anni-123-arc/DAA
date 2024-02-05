#include <iostream>
#include <climits>

// Function to find minimum and maximum recursively
void findMinMax(int arr[], int start, int end, int &min, int &max) {
    if (start == end) {
        min = max = arr[start]; // Base case: if array has only one element
    } else if (start == end - 1) {
        // Base case: if array has two elements
        min = (arr[start] < arr[end]) ? arr[start] : arr[end];
        max = (arr[start] > arr[end]) ? arr[start] : arr[end];
    } else {
        // Recursive case: divide the array into two parts and find min/max in each part
        int mid = (start + end) / 2;
        int min1, min2, max1, max2;
        findMinMax(arr, start, mid, min1, max1);
        findMinMax(arr, mid + 1, end, min2, max2);
        
        // Merge the results
        min = (min1 < min2) ? min1 : min2;
        max = (max1 > max2) ? max1 : max2;
    }
}

int main() {
    int arr[] = {3, 8, 1, 9, 4, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX, max = INT_MIN;
    
    // Find minimum and maximum
    findMinMax(arr, 0, n - 1, min, max);
    
    std::cout << "Minimum number: " << min << std::endl;
    std::cout << "Maximum number: " << max << std::endl;
    
    return 0;
}
