////给你一个按 非递减顺序 排序的整数数组 nums，返回 每个数字的平方 组成的新数组，要求也按 非递减顺序 排序。
////示例 1：
////输入：nums = [-4,-1,0,3,10]
////输出：[0,1,9,16,100]
////解释：平方后，数组变为 [16,1,0,9,100]排序后，数组变为 [0,1,9,16,100]
//
//// Created by virtual小满 on 2025/3/17.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> sortedSquares(vector<int> &nums) {
//        int size = nums.size(), curr = size - 1;
//
//        vector<int> ans(size);
//
//        for (int left = 0, right = size - 1; left <= right; curr--) {
//            cout << curr << nums[left] << nums[right] << endl;
//            if (nums[right] * nums[right] >= nums[left] * nums[left]) {
//                ans[curr] = nums[right] * nums[right];
//                right--;
//            } else {
//                ans[curr] = nums[left] * nums[left];
//                left++;
//            }
//        }
//        return ans;
//    }
//};
//
//int main() {
//    vector<int> nums = {-5, -3, -2, -1};
//    Solution s;
//    vector<int> ans = s.sortedSquares(nums);
//    for (auto a: ans)
//        cout << a << ' ';
//    return 0;
//}