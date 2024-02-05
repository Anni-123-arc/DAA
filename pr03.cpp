#include <iostream>
#include <vector>
using namespace std;
int main() {
     vector<int> numbers;
     vector<int> evenNumbers;
     vector<int> oddNumbers;
    
    // Input the numbers
    cout << "Enter numbers (enter 0 to finish):\n";
    int num;
    while (true) {
         cin >> num;
        if (num == 0)
            break;
        numbers.push_back(num);
    }
    
    // Separate even and odd numbers
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] % 2 == 0)
            evenNumbers.push_back(numbers[i]);
        else
            oddNumbers.push_back(numbers[i]);
    }
    
    // Display even numbers
     cout << "Even numbers: ";
    for (int i = 0; i < evenNumbers.size(); ++i) {
         cout << evenNumbers[i] << " ";
    }
    cout <<  endl;
    
    // Display odd numbers
     cout << "Odd numbers: ";
    for (int i = 0; i < oddNumbers.size(); ++i) {
        cout << oddNumbers[i] << " ";
    }
     cout << std::endl;
    
    return 0;
}
