#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    using namespace std;

    Solution solution;

    // Example 1
    vector<int> nums1 = {1, 2, 3, 4, 5};
    cout << "Example 1: " << (solution.containsDuplicate(nums1) ? "Contains duplicate" : "No duplicate") << endl;

    // Example 2
    vector<int> nums2 = {1, 2, 3, 4, 1};
    cout << "Example 2: " << (solution.containsDuplicate(nums2) ? "Contains duplicate" : "No duplicate") << endl;

    // Example 3
    vector<int> nums3 = {1, 1, 2, 3, 4};
    cout << "Example 3: " << (solution.containsDuplicate(nums3) ? "Contains duplicate" : "No duplicate") << endl;

    return 0;
}

