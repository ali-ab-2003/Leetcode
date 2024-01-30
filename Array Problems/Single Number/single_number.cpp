#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum = nums[0];
        for (int i = 1; i < nums.size(); i++) {   
            singleNum ^= nums[i];
        }

        return singleNum;
    }
};

int main() {
    // Example usage
    vector<int> nums = {2, 2, 1};
    
    Solution solution;
    int result = solution.singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}
