#include <iostream>
#include <vector>
using namespace std;

void separateOddEven(const vector<int>& nums, vector<int>& odd, vector<int>& even) {
    for (int num : nums) {
        if (num % 2 == 0)
            even.push_back(num);
        else
            odd.push_back(num);
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> oddNumbers;
    vector<int> evenNumbers;

    separateOddEven(numbers, oddNumbers, evenNumbers);

    cout << "Odd Numbers: ";
    for (int num : oddNumbers) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Even Numbers: ";
    for (int num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
