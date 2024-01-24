#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] != nums[i - 1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1 = {1, 1, 2};
    int result1 = solution.removeDuplicates(nums1);
    
    cout << "Example 1 Result: ";
    for (int i = 0; i < result1; i++) {
        cout << nums1[i] << " ";
    }
    cout << "\n";

    // Test Case 2
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result2 = solution.removeDuplicates(nums2);

    cout << "Example 2 Result: ";
    for (int i = 0; i < result2; i++) {
        cout << nums2[i] << " ";
    }
    cout << "\n";

    return 0;
}
