#include <vector>
#include <iostream>

using std::vector;
using std::cout;

class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        vector<int> solution;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    solution.push_back(i);
                    solution.push_back(j);
                    return solution;
                }
            }
        }
        return solution;
    }
};

void printVector(vector<int> input)
{
    for (int i : input)
        cout << i << " ";
    cout << '\n';
}

int main() 
{
    // create a test vector called nums and an answer vector with the solution
    vector<int> nums = {2, 7, 11, 15};
    vector<int> answer = {0,1};

    // create a test sum called target
    int target = 9;

    // call the twoSum function and get the return value
    Solution sol;
    vector<int> indexes;
    indexes = sol.twoSum(nums, target);

    // check the return value and output whether the answer is correct or not.
    printVector(indexes);

    if (indexes == answer)
    {
        cout << "Passed." << '\n';
    }
}