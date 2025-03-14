//// 给定一个 n 个元素有序的（升序）整型数组 nums 和一个目标值 target  ，
//// 写一个函数搜索 nums 中的 target，如果目标值存在返回下标，否则返回 -1。
//
////输入: nums = [-1,0,3,5,9,12], target = 9
////输出: 4
////解释: 9 出现在 nums 中并且下标为 4
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int search(vector<int> &nums, int target) {
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
//        return -1;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = {-1, 0, 3, 5, 9, 12};
//    int ans = s.search(nums, 9);
//    cout << ans;
//}