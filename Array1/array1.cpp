#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::unordered_map<int, int> freq;

        for (auto num : nums) {
            freq[num]++;
        }

        int maxFreq = 0;
        for (auto &[num, f] : freq) {
            maxFreq = max(maxFreq, f);
        }

        int result = 0;
        for (auto &[num, f] : freq) {
            if (f == maxFreq) {
                result += f;
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution solution;
    int result = solution.maxFrequencyElements(nums);

    cout << "Result: " << result << endl;

    return 0;
}
