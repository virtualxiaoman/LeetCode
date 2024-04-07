#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// 目标：查找另一数字对应的数组下标。因此使用哈希表存储已经遍历过的数字。
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    cout << "Indices: " << result[0] << " " << result[1] << endl;

    return 0;
}