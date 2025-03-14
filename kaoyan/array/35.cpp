//// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
////请必须使用时间复杂度为 O(log n) 的算法。
////
////示例 1:
////输入: nums = [1,3,5,6], target = 5
////输出: 2
////
////示例 2:
////输入: nums = [1,3,5,6], target = 2
////输出: 1
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int searchInsert(vector<int> &nums, int target) {
//        int left = 0, right = nums.size() - 1, middle;
//        // 假设target在闭区间[left, right]，这样方便很多
//        // 注意这里是<=，=的时候是一个元素
//        while (left <= right) {
//            middle = (left + right) / 2;  // 防止溢出可以用left + ((right - left) >> 1);
//            if (nums[middle] > target)
//                right = middle - 1;  // 因为是闭区间，可以确信middle不是target，因此区间更新为[left, middle - 1]
//            else if (nums[middle] < target)
//                left = middle + 1;
//            else
//                return middle;
//        }
//        return right+1;
//    }
//};
//
//int main() {
//    vector<int> nums = {1, 3, 5, 6, 10};
//    int target = 4;
//    Solution s;
//    int ans = s.searchInsert(nums, target);
//    cout << ans << endl;
//    return 0;
//}