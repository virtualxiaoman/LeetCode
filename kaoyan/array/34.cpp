//// 给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
////如果数组中不存在目标值 target，返回 [-1, -1]。
////你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。
//
////输入：nums = [5,7,7,8,8,10], target = 8
////输出：[3,4]
////输入：nums = [5,7,7,8,8,10], target = 6
////输出：[-1,-1]
////输入：nums = [], target = 0
////输出：[-1,-1]
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int> &nums, int target) {
//        int left = 0, right = nums.size() - 1, middle;
//        while (left <= right) {
//            middle = (left + right) / 2;
//            if (nums[middle] < target)
//                left = middle + 1;
//            else if (nums[middle] > target)
//                right = middle - 1;
//            else {
//                int l = middle, r = middle;
//                while (r < nums.size() and nums[r] == target)
//                    r++;
//                while (l >= 0 and nums[l] == target)
//                    l--;
//                return vector<int>{l+1, r-1};
//            }
//        }
//        return vector<int>{-1, -1};
//    }
//};
//
//int main() {
//    vector<int> nums = {5, 7, 7, 8, 8, 10};
//    int target = 8;
//    Solution s;
//    vector<int> ans = s.searchRange(nums, target);
//    cout << ans[0] << ans[1] << endl;
//
//    return 0;
//}