#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;
            for (int k = 0; k < i + 1; k++) {
                if (k == 0 || k == i)
                    row.push_back(1);
                else
                    row.push_back(triangle[i - 1][k - 1] + triangle[i - 1][k]);
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};

int main() {
    int numRows = 30;

    Solution solution;
    vector<vector<int>> triangle = solution.generate(numRows);

    // Print the generated Pascal's triangle
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
