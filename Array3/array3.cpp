#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (target == nums[i] - 1) {
                return i;
            } else if (target == nums[i] + 1) {
                return i + 1;
            }
        }

        if (target > nums[nums.size() - 1]) {
            return nums.size();
        }

        return 0;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << solution.searchInsert(nums, target) << endl;

    return 0;
}