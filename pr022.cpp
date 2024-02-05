#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the sum of array elements recursively
int arraySum(const vector<int>& arr, int start) {
    if (start == arr.size()) {
        return 0; // Base case: if start index exceeds the size of the array
    } else {
        // Recursive case: sum current element with sum of remaining elements
        return arr[start] + arraySum(arr, start + 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    // Calculate the sum of array elements
    int sum = arraySum(arr, 0);
    
    // Display the result
    cout << "Sum of array elements: " << sum << endl;
    
    return 0;
}
