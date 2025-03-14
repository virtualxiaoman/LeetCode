//// Created by virtual小满 on 2025/3/3.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//    // lower_bound 返回最小的满足 nums[i] >= target 的下标 i
//    // 如果数组为空，或者所有数都 < target，则返回 nums.size()
//    int lower_bound(vector<int> &nums, int target) {
//        int left = 0, right = (int) nums.size() - 1; // 闭区间 [left, right]
//        while (left <= right) {
//            // 循环不变量：nums[left-1] < target，nums[right+1] >= target
//            int mid = (left + right) / 2;
//            if (nums[mid] >= target) {
//                right = mid - 1; // 范围缩小到 [left, mid-1]
//            } else {
//                left = mid + 1; // 范围缩小到 [mid+1, right]
//            }
//        }
//        // 循环结束后 left = right+1
//        // 此时 nums[left-1] < target 而 nums[left] = nums[right+1] >= target
//        // 所以 left 就是第一个 >= target 的元素下标
//        return left;
//    }
//
//public:
//    vector<int> searchRange(vector<int> &nums, int target) {
//        int start = lower_bound(nums, target);
//        if (start == nums.size() || nums[start] != target) {
//            return {-1, -1}; // nums 中没有 target
//        }
//        // 如果 start 存在，那么 end 必定存在
//        int end = lower_bound(nums, target + 1) - 1;
//        return {start, end};
//    }
//};
//
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