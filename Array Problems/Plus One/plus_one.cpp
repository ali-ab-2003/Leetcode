#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i] += carry;
            carry = digits[i] / 10;
            digits[i] %= 10;
        }

        // If there is still a carry after the loop, insert it at the beginning
        if (carry > 0) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};

int main() {
    using namespace std;

    // Example usage of the plusOne function
    Solution solution;

    // Test case 1: {9, 9, 9}
    vector<int> digits1 = {9, 9, 9};
    vector<int> result1 = solution.plusOne(digits1);

    cout << "Original number: ";
    for (int digit : digits1) {
        cout << digit;
    }
    cout << endl;

    cout << "Incremented number: ";
    for (int digit : result1) {
        cout << digit;
    }
    cout << endl;

    // Test case 2: {1, 2, 3}
    vector<int> digits2 = {1, 2, 3};
    vector<int> result2 = solution.plusOne(digits2);

    cout << "Original number: ";
    for (int digit : digits2) {
        cout << digit;
    }
    cout << endl;

    cout << "Incremented number: ";
    for (int digit : result2) {
        cout << digit;
    }
    cout << endl;

    return 0;
}