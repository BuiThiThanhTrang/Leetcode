#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> nums, int target);

int main()
{
    vector<int> x = twoSum({ 1, 2, 3 }, 4);
    for (int i : x)
    {
        cout << i;
    }
    return 0;
}

vector<int> twoSum(vector<int> nums, int target)
{
    std::unordered_map<int, int> numIndexMap; // Maps numbers to their indices
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numIndexMap.find(complement) != numIndexMap.end()) {
            // Complement found, return indices
            return { numIndexMap[complement], i };
        }
        // Store the current number and its index in the map
        numIndexMap[nums[i]] = i;
    }
    return {};
}